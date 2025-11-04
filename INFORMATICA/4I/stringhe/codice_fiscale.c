/*Scrivere un programma in linguaggio C che calcoli e visualizzi il codice fiscale 
(senza il carattere di controllo finale) chiedendo all’utente di inserire nome, 
cognome, data di nascita nel formato GG/MM/AAAA, sesso (M o F).
utilizzare comune G186
utilizzare le funzioni
Il codice fiscale è un codice alfanumerico di 16 caratteri che serve per identificare in modo univoco ogni cittadino italiano.
È composto in questo modo:
CCC NNN YYMDD LLLL C
dove:
CCC → prime tre lettere del cognome, formate prendendo le consonanti (o le vocali, se le consonanti non bastano);
NNN → prime tre lettere del nome, con una regola simile a quella del cognome (ma se ci sono quattro consonanti, si prendono la 1ª, 3ª e 4ª);
YY → ultime due cifre dell’anno di nascita;
M → lettera che rappresenta il mese di nascita (A = gennaio, B = febbraio, C = marzo, D = aprile, E = maggio, H = giugno, L = luglio, M = agosto, P = settembre, R = ottobre, S = novembre, T = dicembre);
DD → giorno di nascita (per le donne si aggiunge 40 al giorno);
LLLL → codice del comune di nascita (per questo esercizio useremo G186, che è il codice del comune di Ostiglia);
C → lettera di controllo calcolata con una formula basata sui precedenti 15 caratteri.


Sarà necessario verificare la correttezza degli input, quindi nome e cognome 
devono essere composti solo da lettere; la data deve essere composta solo da numeri 
(oltre agli eventuali /, si può scegliere se far inserire un valore della data alla 
volta o tutta la data con il separatore /); il sesso può avere solo la lettera M o F.
 Per il controllo di nome, cognome e data, si suggerisce di leggere l’input carattere 
 per carattere usando getchar().
*/
#include <stdio.h>

void leggi_cognome(char *c);
void leggi_nome(char *n);
void leggi_data(char *d);
void leggi_sesso(char *s);
void tre_consonanti_cognome(char *cognome, char *ccc);
void tre_consonanti_nome(char *nome, char *nnn);
char lettera_del_mese(char m1, char m2);
void giorno_con_donna(int g, char s, char *dd);
void unisci_codice(char *ccc, char *nnn, char *yy, char m, char *dd, char *cod);

int main() {
    char cognome[40], nome[40], data[11], sesso;
    char ccc[4], nnn[4], yy[3], mese, dd[3];
    char codice[16];

    printf("=== CODICE FISCALE SENZA CONTROLLO ===\n\n");

    leggi_cognome(cognome);
    leggi_nome(nome);
    leggi_data(data);
    leggi_sesso(&sesso);

    // CCC - Cognome
    tre_consonanti_cognome(cognome, ccc);

    // NNN - Nome
    tre_consonanti_nome(nome, nnn);

    // YY - Anno
    yy[0] = data[8];
    yy[1] = data[9];
    yy[2] = '\0';

    // M - Mese
    mese = lettera_del_mese(data[3], data[4]);

    // DD - Giorno
    int giorno = (data[0] - '0') * 10 + (data[1] - '0');
    giorno_con_donna(giorno, sesso, dd);

    // Codice finale
    unisci_codice(ccc, nnn, yy, mese, dd, codice);

    printf("\nCodice: %s\n", codice);

    return 0;
}

// Legge cognome, solo lettere A-Z o a-z
void leggi_cognome(char *c) {
    int i, ok;
    do {
        ok = 1;
        printf("Cognome: ");
        i = 0;
        char ch;
        while ((ch = getchar()) != '\n' && i < 39) {
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                c[i++] = ch;
            }
        }
        c[i] = '\0';

        if (i == 0) {
            printf("Scrivi qualcosa!\n");
            ok = 0;
        }
        // Pulisci buffer se ci sono caratteri strani
        while (getchar() != '\n');
    } while (ok == 0);
}

// Legge nome
void leggi_nome(char *n) {
    int i, ok;
    do {
        ok = 1;
        printf("Nome: ");
        i = 0;
        char ch;
        while ((ch = getchar()) != '\n' && i < 39) {
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                n[i++] = ch;
            }
        }
        n[i] = '\0';

        if (i == 0) {
            printf("Scrivi qualcosa!\n");
            ok = 0;
        }
        while (getchar() != '\n');
    } while (ok == 0);
}

// Legge data GG/MM/AAAA
void leggi_data(char *d) {
    int ok;
    do {
        ok = 1;
        printf("Data (GG/MM/AAAA): ");
        int i = 0;
        char ch;
        while ((ch = getchar()) != '\n' && i < 10) {
            if ((ch >= '0' && ch <= '9') || ch == '/') {
                d[i++] = ch;
            }
        }
        d[i] = '\0';

        if (i != 10 || d[2] != '/' || d[5] != '/') {
            printf("Deve essere GG/MM/AAAA\n");
            ok = 0;
        } else {
            // Controlla che le cifre siano corrette
            for (int j = 0; j < 10; j++) {
                if (j == 2 || j == 5) continue;
                if (d[j] < '0' || d[j] > '9') ok = 0;
            }
            if (ok == 0) printf("Solo numeri!\n");
        }
        while (getchar() != '\n');
    } while (ok == 0);
}

// Legge M o F
void leggi_sesso(char *s) {
    char ch;
    do {
        printf("Sesso (M/F): ");
        ch = getchar();
        while (getchar() != '\n');
        if (ch == 'M' || ch == 'm') *s = 'M';
        else if (ch == 'F' || ch == 'f') *s = 'F';
        else {
            printf("Scrivi M o F!\n");
        }
    } while (*s != 'M' && *s != 'F');
}

// Prende 3 consonanti dal cognome (senza vocali)
void tre_consonanti_cognome(char *cognome, char *ccc) {
    char cons[20], voc[20];
    int nc = 0, nv = 0, i = 0;

    // Separa consonanti e vocali
    while (cognome[i] != '\0') {
        char c = cognome[i];
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            if (nv < 20) voc[nv++] = c;
        } else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            if (nc < 20) cons[nc++] = c;
        }
        i++;
    }

    // Prima le consonanti
    int p = 0;
    for (i = 0; i < nc && p < 3; i++) {
        ccc[p++] = cons[i];
    }
    // Poi le vocali
    for (i = 0; i < nv && p < 3; i++) {
        ccc[p++] = voc[i];
    }
    // Poi X
    while (p < 3) {
        ccc[p++] = 'X';
    }
    ccc[3] = '\0';
}

// Prende 3 consonanti dal nome (se 4+ → 1ª, 3ª, 4ª)
void tre_consonanti_nome(char *nome, char *nnn) {
    char cons[20], voc[20];
    int nc = 0, nv = 0, i = 0;

    while (nome[i] != '\0') {
        char c = nome[i];
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            if (nv < 20) voc[nv++] = c;
        } else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            if (nc < 20) cons[nc++] = c;
        }
        i++;
    }

    int p = 0;
    if (nc >= 4) {
        // 1ª, 3ª, 4ª
        nnn[p++] = cons[0];
        nnn[p++] = cons[2];
        nnn[p++] = cons[3];
    } else {
        for (i = 0; i < nc && p < 3; i++) nnn[p++] = cons[i];
        for (i = 0; i < nv && p < 3; i++) nnn[p++] = voc[i];
        while (p < 3) nnn[p++] = 'X';
    }
    nnn[3] = '\0';
}

// Converte mese in lettera
char lettera_del_mese(char m1, char m2) {
    int mese = (m1 - '0') * 10 + (m2 - '0');
    if (mese == 1) return 'A';
    if (mese == 2) return 'B';
    if (mese == 3) return 'C';
    if (mese == 4) return 'D';
    if (mese == 5) return 'E';
    if (mese == 6) return 'H';
    if (mese == 7) return 'L';
    if (mese == 8) return 'M';
    if (mese == 9) return 'P';
    if (mese == 10) return 'R';
    if (mese == 11) return 'S';
    if (mese == 12) return 'T';
    return 'X';
}

// Giorno: +40 per donne
void giorno_con_donna(int g, char s, char *dd) {
    int giorno = g;
    if (s == 'F' || s == 'f') giorno += 40;
    dd[0] = '0' + (giorno / 10);
    dd[1] = '0' + (giorno % 10);
    dd[2] = '\0';
}

// Unisce tutto
void unisci_codice(char *ccc, char *nnn, char *yy, char m, char *dd, char *cod) {
    int i = 0, j = 0;

    while (ccc[j]) cod[i++] = ccc[j++];
    j = 0;
    while (nnn[j]) cod[i++] = nnn[j++];
    j = 0;
    while (yy[j]) cod[i++] = yy[j++];
    cod[i++] = m;
    j = 0;
    while (dd[j]) cod[i++] = dd[j++];
    cod[i++] = 'G';
    cod[i++] = '1';
    cod[i++] = '8';
    cod[i++] = '6';
    cod[i] = '\0';
}

   


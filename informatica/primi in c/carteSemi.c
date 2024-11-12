/* Memorizzare il seme e il punteggio di due carte da poker.
Dire quale delle carte vale di più.
Il valore di una carta da poker è dato in primo luogo dal punteggio
e in caso di parità di punteggio dal seme.
I punteggi in ordine decrescente sono {k,q,j,9,8,7,6,5,4,3,2,1},
i semi in ordine decrescente sono  {cuori, quadri, fiori, picche} per
i semi memorizzare solo la lettera iniziale del seme.
PS: l’ordine dei semi può essere ricordato grazie alla frase “come quando fuori piove”
in cui le parole ricordano i nomi dei semi (cuori, quadri, fiori, picche).*/
//esercizio 5

#include <stdio.h>

int main() {
    char punteggio1, seme1;
    char punteggio2, seme2;
    
    printf("Inserisci il punteggio e il seme della prima carta (es. k c): ");
    scanf(" %c %c", &punteggio1, &seme1);
    
    printf("Inserisci il punteggio e il seme della seconda carta (es. q f): ");
    scanf(" %c %c", &punteggio2, &seme2);
    

    int valore1, valore2;
    if (punteggio1 == 'k') valore1 = 13;
    else if (punteggio1 == 'q') valore1 = 12;
    else if (punteggio1 == 'j') valore1 = 11;
    else if (punteggio1 == '9') valore1 = 9;
    else if (punteggio1 == '8') valore1 = 8;
    else if (punteggio1 == '7') valore1 = 7;
    else if (punteggio1 == '6') valore1 = 6;
    else if (punteggio1 == '5') valore1 = 5;
    else if (punteggio1 == '4') valore1 = 4;
    else if (punteggio1 == '3') valore1 = 3;
    else if (punteggio1 == '2') valore1 = 2;
    else valore1 = 1;
    
    if (punteggio2 == 'k') valore2 = 13;
    else if (punteggio2 == 'q') valore2 = 12;
    else if (punteggio2 == 'j') valore2 = 11;
    else if (punteggio2 == '9') valore2 = 9;
    else if (punteggio2 == '8') valore2 = 8;
    else if (punteggio2 == '7') valore2 = 7;
    else if (punteggio2 == '6') valore2 = 6;
    else if (punteggio2 == '5') valore2 = 5;
    else if (punteggio2 == '4') valore2 = 4;
    else if (punteggio2 == '3') valore2 = 3;
    else if (punteggio2 == '2') valore2 = 2;
    else valore2 = 1;
    
    // Confronto dei punteggi
    if (valore1 > valore2) {
        printf("La prima carta vale di più.\n");
    } else if (valore1 < valore2) {
        printf("La seconda carta vale di più.\n");
    } else {
        
        // Valori dei semi
        int semeValore1, semeValore2;
        if (seme1 == 'c') semeValore1 = 4;
        else if (seme1 == 'q') semeValore1 = 3;
        else if (seme1 == 'f') semeValore1 = 2;
        else semeValore1 = 1;
        
        if (seme2 == 'c') semeValore2 = 4;
        else if (seme2 == 'q') semeValore2 = 3;
        else if (seme2 == 'f') semeValore2 = 2;
        else semeValore2 = 1;
        
        // Confronto dei semi
        if (semeValore1 > semeValore2) {
            printf("Le carte hanno lo stesso punteggio, ma la prima carta ha un seme di valore maggiore.\n");
        } else if (semeValore1 < semeValore2) {
            printf("Le carte hanno lo stesso punteggio, ma la seconda carta ha un seme di valore maggiore.\n");
        } else {
            printf("Le due carte sono identiche.\n");
        }
    }
    
    return 0;
}

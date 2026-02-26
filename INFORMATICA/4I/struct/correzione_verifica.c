/*  Dichiarare un array di libri di dimensione massima N
    Consentire l'inserimento dei dati di un libro.
    Aggiornare correttamente il numero di copie disponibili.
    Registare il prestito di un libro:
        -inserendo la data di un prestito e la data di restituzione
        -decrementando il numero di copie disponibili
        -impedendo il prestito se non ci sono copie disponibili
    Visualizzare l'elenco completo dei libri con tutte le informazioni
    Visualizzare solo i libri attualmente in prestito(copie disponibili<copie totali)
    Cercare un libro tramite ISBN
    Stampare solo i libri con prestito scaduto
    Vincoli: accedere ai campi delle date tramite struct annidata
*/
#include <stdio.h>
#include <string.h>
typedef struct {
    int giorno;
    int mese;
    int anno;
} Data;
typedef struct {
    char titolo[50];
    char autore[50];
    char ISBN[20];
    int copie_totali;
    int copie_disponibili;
    Data data_prestito;
    Data data_restituzione;
} Libro;

Libro* inserisci_libro(Libro* biblioteca, int* num_libri) {
    if (*num_libri >= 100) {
        printf("Limite massimo di libri raggiunto.\n");
        return biblioteca;
    }
    printf("Inserisci titolo: ");
    scanf("%s", biblioteca[*num_libri].titolo);
    printf("Inserisci autore: ");
    scanf("%s", biblioteca[*num_libri].autore);
    printf("Inserisci ISBN: ");
    scanf("%s", biblioteca[*num_libri].ISBN);
    printf("Inserisci numero di copie totali: ");
    scanf("%d", &biblioteca[*num_libri].copie_totali);
    biblioteca[*num_libri].copie_disponibili = biblioteca[*num_libri].copie_totali;
    (*num_libri)++;
    return biblioteca;
}

void registra_prestito(Libro* biblioteca, int num_libri) {
    char ISBN[20];
    printf("Inserisci ISBN del libro da prestare: ");
    scanf("%s", ISBN);
    for (int i = 0; i < num_libri; i++) {
        if (strcmp(biblioteca[i].ISBN, ISBN) == 0) {
            if (biblioteca[i].copie_disponibili > 0) {
                printf("Inserisci data di prestito (gg mm aaaa): ");
                scanf("%d %d %d", &biblioteca[i].data_prestito.giorno, &biblioteca[i].data_prestito.mese, &biblioteca[i].data_prestito.anno);
                printf("Inserisci data di restituzione (gg mm aaaa): ");
                scanf("%d %d %d", &biblioteca[i].data_restituzione.giorno, &biblioteca[i].data_restituzione.mese, &biblioteca[i].data_restituzione.anno);
                biblioteca[i].copie_disponibili--;
                printf("Prestito registrato con successo.\n");
            } else {
                printf("Non ci sono copie disponibili per questo libro.\n");
            }
            return;
        }
    }
    printf("Libro non trovato.\n");
}
int main(){
    Libro* biblioteca
}
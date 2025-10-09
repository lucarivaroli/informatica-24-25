/* Scrivi un programma in C che gestisca un insieme di numeri interi usano un array dinamico.
Il programma deve permettere, tramite menù:
1. Aggiungere un numero (espandendo l'array con realloc), cioe una nuova dimensione
2. Visualizzare tutti inumeri
3. Cercare un numero specifico
4. Ordinare i numeri in ordine crescente
5. Eliminare un numero scelto
6. Uscire*/
#include <stdio.h>
#include <stdlib.h>
int* creavett(int n) {
    
    int* vettore = (int*)malloc(n * sizeof(int));
    if (vettore == NULL) {
        printf("Errore nell'allocazione della memoria!\n");
        exit(1); // termina il programma
    }
    return vettore;
}
void inseriscivalori(int* vettore, int n) {
    for (int i = 0; i < n; i++) {
        printf("Inserisci l'elemento %d: ", i + 1);
        scanf("%d", &vettore[i]);
    }
}
void stampavett(int* vettore, int n) {
    printf("Hai inserito i seguenti elementi:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", vettore[i]);
    }
    printf("\n");
}
int cercaNumero(int* vettore, int n, int numero) {
    for(int i = 0; i < n; i++) {
        if(vettore[i] == numero) {
            return i;  // ritorna l'indice se trovato
        }
    }
    return -1;  // ritorna -1 se non trovato
}
void ordinaCrescente(int* vettore, int n) {
    int temp;
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(vettore[j] > vettore[j+1]) {
                temp = vettore[j];
                vettore[j] = vettore[j+1];
                vettore[j+1] = temp;
            }
        }
    }
}
int* eliminaNumero(int* vettore, int* n, int posizione) {
    if(posizione < 0 || posizione >= *n) {
        printf("Posizione non valida!\n");
        return vettore;
    }       
    // Sposta tutti gli elementi successivi indietro di una posizione
    for(int i = posizione; i < *n - 1; i++) {
        vettore[i] = vettore[i + 1];
    }   
    (*n)--;  // Decrementa la dimensione dell'array
    // Ridimensiona l'array
    int* nuovo_vett = (int*)realloc(vettore, (*n) * sizeof(int));
    if(nuovo_vett != NULL) {
        return nuovo_vett;
    }
    return vettore; // Se realloc fallisce, ritorna il vecchio puntatore
}
int main()
{
    int scelta;
    int* vettore=NULL;
    int n=0;    
    printf("inserisci la dimenssione iniziale dell'array: ");
    scanf("%d", &n);    
    vettore = creavett(n);
    inseriscivalori(vettore, n);
    stampavett(vettore, n); 
    int numero, posizione;    
    do {
        printf("\n MENU \n");
        printf("1. Aggiungi un numero\n");
        printf("2. Visualizza numeri\n");
        printf("3. Cerca un numero\n");
        printf("4. Ordina numeri\n");
        printf("5. Elimina un numero\n");
        printf("6. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        switch(scelta) {
            case 1:
                n++;
                vettore = (int*)realloc(vettore, n * sizeof(int));
                if(vettore == NULL) {
                    printf("Errore nella riallocazione!\n");
                    exit(1);
                }
                printf("Inserisci il nuovo numero: ");
                scanf("%d", &vettore[n-1]);
                break;                
            case 2:
                if(n > 0)
                    stampavett(vettore, n);
                else
                    printf("L'array è vuoto.\n");
                break;                
            case 3:
                printf("Inserisci il numero da cercare: ");
                scanf("%d", &numero);
                posizione = cercaNumero(vettore, n, numero);
                if(posizione != -1) {
                    printf("Numero trovato alla posizione %d.\n", posizione);       
                } else {
                    printf("Numero non trovato.\n");
                }
                break;                
            case 4:

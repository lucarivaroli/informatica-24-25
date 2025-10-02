/*Scrivi un programma in C che:
1. Chiede all'utente quanti numeri interi vuole inserire;
2. Alloca dinamicamente un array di quella dimensione con malloc();
3. Permette all'utente di inserire i numeri;
4. Chiede all'utente se vuole aumentare la dimensione dell'array;
   . Se sì, richiede la nuova dimensione e usa realloc() per ridimensionarlo;
    .   Permette quindi di inserire i nuovi valori negli spazi aggiunti;
5. Infine, stampa tutti gli elementi dell'array.
*/

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

int main()
{
    int scelta;
    int* vettore=NULL;
    int n=0; 
    
    printf("inserisci la dimenssione dell'array: ");
    scanf("%d", &n);
    
    vettore = creavett(n);
    inseriscivalori(vettore, n);
    stampavett(vettore, n);

    printf("vuoi aumentare la dimensione dell'array? (0=si; 1=no)");
    scanf("%d", &scelta);

    if(scelta==0)
    {
        int nuova_dim;

        printf("inserisci la nuova dimensione: ");
        scanf("%d", &nuova_dim);

       int* temp = (int*)realloc(vettore, nuova_dim * sizeof(int));
       if(temp==NULL)
       {
            printf("errore!!");
            free(vettore);
            exit(1);
        }
        vettore = temp;
        inseriscivalori(vettore+n, nuova_dim-n);
        n=nuova_dim;


    }
    stampavett(vettore, n);
    free (vettore);
    return 0;
}
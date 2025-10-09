/* Scrivere un programma in C che gestisca un insieme di numeri interi usando un array dinamico.
Il programma deve permettere, tramite menù:
    1. Aggiungere un numero (espandendo l’array con realloc)
    2. Visualizzare tutti i numeri
    3. Cercare un numero specifico
    4. Ordinare i numeri in ordine crescente
    5. Eliminare un numero scelto
    6. Uscire
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int *numeri=NULL; //array dinamico
    int dimensione=0; //quanti elementi ci  sono dentro array
    int scelta,n,trovato=0 i;

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Aggiungere un numero\n");
        printf("2. Visualizzare tutti i numeri\n");
        printf("3. Cercare un numero specifico\n");
        printf("4. Ordinare i numeri in ordine crescente\n");
        printf("5. Eliminare un numero scelto\n");
        printf("6. Uscire\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch (scelta)
        {
        case 1:
            printf("numero da inserire: ");
            scanf("%d", &n);
            numeri=(int*)realloc(numeri, (dimensione+1)*sizeof(int));
            if(numeri==NULL){
                printf("errore di allocazione\n");
                return 1;
            }
            numeri[dimensione]=n;
            dimensione++;
            printf("numero aggiunto\n");

            break;
            
            case 2:
            printf("contenuto dell'array: ");
            if(dimensione==0)
                printf("array vuoto");
            else
                for(i=0; i<dimensione; i++){
                printf("%d", numeri[i]);
            }
            break;
            case 3:
            printf("numero da cercare: ");
            scanf("%d", &n);
                for(i=0;i<dimensione;i++){
                    if(numeri[i]==n){
                        printf("il numero e trovato in %d\n",i);
                    }
                
                }
                if(trovato==0){
                    printf("elemento non trovato\n");
                }
            break;
            default;

    
    } while (scelta !=6);
    
}



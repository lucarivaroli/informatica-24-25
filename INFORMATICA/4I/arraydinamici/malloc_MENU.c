/* -- La funzione malloc() alloca un blocco di memoria di una 
dimensione specificata, mentre realloc() ridimensiona un blocco 
di memoria precedentemente allocato con malloc()
 In sintesi, malloc() crea un nuovo blocco, realloc() 
 modifica le dimensioni di uno esistente.--
*/
/*CREARE UN ARRAY DINAMICO CHIEDENDO ALL'UTENTE LA SUA DIMENSIONE
IL PROGRAMMA DEVE PREVEDERE LE SEGUENTI FUNZIONI:
1) CREARE L'ARRAY 
2) INSERISCE GLI ELEMENTI NELL'ARRAY
3) STAMPA DEI VALORI
4) ESCI     */

#include<stdio.h>
#include<stdlib.h>

int* creavett(int _n){
    
    int *_vettore=(int*)malloc(_n *sizeof(int));
        if(_vettore==NULL){

            printf("Errore!\n");
            return 1;
        }
    return _vettore;
}

int* inseriscivalori(int *_vettore, int n){

    for(int i=0; i<n; i++){
        printf("inserisci l'elemento: ");
        scanf("%d", &_vettore[i]);

    }
    return _vettore;
}

void stampavett(int *_vettore, int _n){
    printf("hai inserito i seguenti elementi: ");
    for (int i = 0; i < _n; i++)
    {
        printf("%d\t", _vettore[i]);
    }
    printf("\n");
}

int main(){
    int *vettore=NULL;     //puntatore al vettore
    int  n;
    
    do{
    printf("inserisci la quantita degli elementi: ");
    scanf("%d", &n);
    }while(n<0);

    vettore= creavett(n);
    vettore= inseriscivalori(vettore, n);
    stampavett(vettore, n);

}
/* SCRIVERE UN PROGRAMMA IN LINGUAGGIO IN C CHE:
    1) ALLOCHI DINAMICAMENTE UN ARRAY INIZIALE DI N NUMERI
    2) INSERIMENTO DEI VALORI
    3) STAMPA ARRAY 
    4) CALCOLI LA SOMMA DEGLI ELEMENTI MULTIPLI DI 3
    5) CREIAMO UN NUOVO ARRAY CON SOLO VALORI DISPARI
 */

#include<stdio.h>
#include<stdlib.h>

int* _creavett(int _n){

    int *_vettore=(int*)malloc(_n *sizeof(int));
        if(_vettore==NULL){

            printf("Errore!\n");
            return 1;
        }
    return _vettore;
}

int *_inseriscivalori(int _n){
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

int _sommamultipli(int *_vettore, int _n){
    int somma=0;
    for(int i=0; i<_n; i++){
        if(_vettore[i]%3==0){
            somma+=_vettore[i];
        }
    }
    return somma;
}










int main(){

    int *vettore=NULL;
    int n;


    vettore= creavett(n);
    vettore= inseriscivalori(vettore, n);
    stampavett(vettore, n);
    

}
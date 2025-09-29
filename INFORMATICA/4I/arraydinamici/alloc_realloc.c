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

int sommamultipli(int *_vettore, int _n){
    int somma=0;
    for(int i=0; i<_n; i++){
        if(_vettore[i]%3==0){
            somma+=_vettore[i];
        }
    }
    return somma;
}

void creavettdispari(int *_vettore, int _n){
    int count=0;
    for(int i=0; i<_n; i++){
        if(_vettore[i]%2!=0){
            count++;
        }
    }
    int *vettoredispari=(int*)malloc(count*sizeof(int));
    if(vettoredispari==NULL){
        printf("Errore!\n");
        return 1;
    }
    int j=0;
    for(int i=0; i<_n; i++){
        if(_vettore[i]%2!=0){
            vettoredispari[j]=_vettore[i];
            j++;
        }
    }
    printf("il nuovo vettore con solo numeri dispari e': ");
    for(int i=0; i<count; i++){
        printf("%d\t", vettoredispari[i]);
    }
    printf("\n");
    free(vettoredispari);
}



int main(){

    int *vettore=NULL;
    int n;


    vettore= creavett(n);
    vettore= inseriscivalori(vettore, n);
    stampavett(vettore, n);
    int somma=sommamultipli(vettore, n);
    creavettdispari(vettore, n);


    printf("la somma dei multipli di 3 e': %d\n", somma);
    return 0;

    

}
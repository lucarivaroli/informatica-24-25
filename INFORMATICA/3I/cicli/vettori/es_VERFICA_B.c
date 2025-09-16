/*Dato
un vettore numerico di N posizioni al primo elemento dispari stampare
quanti valori diversi da zero si sono incontrati, il numero dispari
incontrato e la sua posizione nel vettore*/

#include <stdio.h>

#define DIM 7

void riempivettore(int vett[], int dim){
    for(int i =0; i<dim; i++){
        printf("inserisci l'elemento in %d posizione: ", i);
        scanf("%d", &vett[i]);
    }
}

int main(){
    int vett[DIM];
    int dispari=0;
    int cnt0=0;

    riempivettore(vett, DIM);

    for (int i=0; i<DIM; i++){
        if(vett[i]%2==1){
            printf("il primo numero dispari trovato e: %d in posizione %d", vett[i], i);
            printf("\n i numeri diversi da 0 incontrati prima sono: %d", cnt0);
            break;
        }

        if(vett[i]!=0){
            cnt0++;
        }
    }

    

}

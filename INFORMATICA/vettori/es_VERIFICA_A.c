/*Caricare
da tastiera un vettore di N elementi. Scorrendo il vettore, al primo
zero incontrato stampare la somma di tutti gli elementi considerati*/

#include <stdio.h>

#define DIM 7

void riempivettore(int vett[], int dim){
    for(int i =0; i<dim; i++){
        printf("inserisci l'elemento in %d posizione: ", i);
        scanf("%d", &vett[i]);
    }
}

int main(){
    int somma=0;
    int vett[DIM];
   


    riempivettore(vett, DIM);

    for (int i=0; i<DIM; i++){
         somma+=vett[i];
    
        if(vett[i]==0){
           break;
        }
    }

    printf("la somma e :%d", somma);

}


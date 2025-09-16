/*
Descrizione:
Scrivi un programma che legga 5 numeri interi dall'utente e trovi il numero massimo presente nell'array.
*/

#include <stdio.h>

int main(){
    int numero[5];
    int max=0;

    printf("inserisci i valori: ");
    scanf("%d", &numero[0]);
    max=numero[0];

    for(int i=1; i<5; i++){
        scanf("%d", &numero[i]);

        if(numero[i]>max){
            max=numero[i];
           
        }

    }

    printf("il numero piu grande e: %d", max);
}

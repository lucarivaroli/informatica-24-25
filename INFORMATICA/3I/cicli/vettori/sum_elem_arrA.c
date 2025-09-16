/*Descrizione:
Scrivi un programma che legga 5 numeri interi dall'utente, li memorizzi in un array e 
poi calcoli la somma di tutti gli elementi dell'array.*/

#include <stdio.h>


int main(){
    int numeri[5];
    int somma=0;

    printf("inserisci i 5 valori: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numeri[i]);
        somma+=numeri[i];

    }
    
    printf("la somma e: %d ", somma);
}
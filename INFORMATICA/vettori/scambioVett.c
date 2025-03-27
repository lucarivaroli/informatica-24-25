/*dati dall'utente due vettori v1 e v2 eseguire lo scambio dei valori tra i due vettori*/

#include<stdio.h>
#include "libreria.h"
#include "libreria.c"
#define DIM 10


int main(){
    int v1[DIM]={0}, v2[DIM]={0};
    printf("inserisci il primo vettore: ");
    riempiVettore(v1, DIM);
    printf("inserisci il secondo vettore: ");
    riempiVettore(v2, DIM);
    
    scambiavettori(v1, DIM, v2, DIM);

    printf("vettore 1: ");
    stampaVettore(v1, DIM, ' ');
    printf("\nvettore 2: ");
    stampaVettore(v2, DIM, ' ');
    

   
}
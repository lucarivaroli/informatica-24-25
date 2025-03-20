#include <stdio.h>
#include "libreria.h"   //prototipi delle funzioni

void richiediValori(int vettore[], int dim){
    int n=0;
    for(int i=0; i<dim; i++){
        printf("Inserisci il valore in posizione %d: ", i);
        scanf("%d", &n);
        if(n%2==0){
            vettore[i]=n;
    }
}

void stampaVettore(int vettore[], int dim, char sep){
    for(int i=0; i<dim; i++){
        printf("%d%c", vettore[i], sep);
    }
}
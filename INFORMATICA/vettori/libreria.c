#include <stdio.h>
#include "libreria.h"   //prototipi delle funzioni

void richiediValori(int vettore[], int dim){
    int n=0, i=0;
    while(i<dim){
        printf("Inserisci il %do valore: ", i+1);
        scanf("%d", &n);
        if(n%2==0){
            vettore[i]=n;
            i++;
        }
    }
}

void stampaVettore(int vettore[], int dim, char sep){
    for(int i=0; i<dim; i++){
        printf("%d%c", vettore[i], sep);
    }
}
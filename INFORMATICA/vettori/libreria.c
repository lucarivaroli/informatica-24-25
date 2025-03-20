#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

void caricaVettoreRandom(int vettore[], int dim, int min, int max){
    srand(time(NULL));
    for(int i=0; i<dim; i++){
        vettore[i]=rand()%(max-min+1)+min;
    }
}

int sommaVettore(int vettore[], int dim){
    int somma=0;
    for(int i=0; i<dim; i++){
        somma+=vettore[i];
    }
    return somma;
}

float mediaVettore(int vettore[], int dim){
    return (float)sommaVettore(vettore, dim)/dim;
}

int contaValore(int vettore[], int dim, int valore){
    int contatore=0;
    for(int i=0; i<dim; i++){
        if(vettore[i]==valore){
            contatore++;
        }
    }
    return contatore;
}
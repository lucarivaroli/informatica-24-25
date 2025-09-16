/*Inizializzazione - Riempimento con valori pari-Stampa
Creazione di una libreria personale*/
#include <stdio.h>
#include "libreria.h"
#include "libreria.c"
#define DIM 10

int main(){
    int vettore[10];
    richiediValori(vettore, DIM);
    stampaVettore(vettore, DIM, ' ');
    return 0;
}
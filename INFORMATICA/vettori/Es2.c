/*caricato un vettore con valori random, calcolare la media dei valori*/
#include <stdio.h>
#include "libreria.h"
#include "libreria.c"

#define DIM 10

int main(){
    int vettore[DIM];
    caricaVettoreRandom(vettore, DIM, 1, 100);
    stampaVettore(vettore, DIM, ' ');
    printf("\nLa media dei valori del vettore e': %.2f\n", mediaVettore(vettore, DIM));
    return 0;
}
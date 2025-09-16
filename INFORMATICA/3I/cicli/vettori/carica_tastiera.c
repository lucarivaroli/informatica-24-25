/* costruire un vettore di n elementi
con valori letti da tastiera
*/
#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"   //prototipi delle funzioni
#include "libreria.c"  //definizione delle funzioni


int main(){

    int vett[5];

    for (int i = 0; i < 5; i++) {
        printf("Inserisci il valore per l'elemento %d: ", i);
        scanf("%d", &vett[i]);
    }

    stampaVettore(vett, 5, '.' );
}
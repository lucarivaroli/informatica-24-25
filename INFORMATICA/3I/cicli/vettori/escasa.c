/*Crea i file necessari per una libreria che contenga le funzioni principali 
degli array (come quella fatta in classe). Quindi scrivi un programma che 
permetta di riempire un vettore di 30 elementi con valori casuali compresi 
tra 0 e 10 e una funzione che restituisca il numero di volte in cui compare
un valore (compreso tra 0 e 10) scelto dall'utente.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libreria.h"

#define DIM 30

int main(){
    int vettore[DIM], valore;
    caricaVettoreRandom(vettore, DIM, 0, 10);
    stampaVettore(vettore, DIM, ' ');
    printf("\nInserisci il valore da cercare: ");
    scanf("%d", &valore);
    printf("Il valore %d compare %d volte nel vettore\n", valore, contaValore(vettore, DIM, valore));
    return 0;
}
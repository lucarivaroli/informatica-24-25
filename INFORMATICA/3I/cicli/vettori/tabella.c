#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libreria.h"
#include "libreria.c"

#define righe 17
#define colonne 10

void carica matrice(int matrice[righe][colonne], int righe, int colonne, int min, int max) {
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            matrice[i][j] = rand() %(max-min +1)+min ; /* quello tra parentesi e uguale a 4 +1 e quindi non serve min e max */ 
        }
    }
}


/*Data una data in formato giorno e mese, dire a
che stagione appartiene la data.
Ricordando che primavera va dal 21 marzo al 22 giugno,
l'estate va dal 23 giugno
al 22 settembre, l'autunno va dal 23 settembre al 21 dicembre e
l'inverno va dal 22 dicembre al 20 marzo. */

#include <stdio.h>

int main() {
    int mese, giorno;
    
    printf("Inserisci giorno: ");
    scanf("%d", &giorno);
    printf("Inserisci mese: ");
    scanf("%d", &mese);
    
    if ((mese == 3 && giorno >= 21) || (mese == 4) || (mese == 5) || (mese == 6 && giorno <= 22)) {
        printf("Primavera\n");
    } else if ((mese == 6 && giorno >= 23) || (mese == 7) || (mese == 8) || (mese == 9 && giorno <= 22)) {
        printf("Estate\n");
    } else if ((mese == 9 && giorno >= 23) || (mese == 10) || (mese == 11) || (mese == 12 && giorno <= 21)) {
        printf("Autunno\n");
    } else if ((mese == 12 && giorno >= 22) || (mese == 1) || (mese == 2) || (mese == 3 && giorno <= 20)) {
        printf("Inverno\n");
    } else {
        printf("Data non valida\n");
    }
    
    return 0;
}

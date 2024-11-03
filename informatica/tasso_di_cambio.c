/*Supponete
che la parità di scambio tra Euro e Dollaro sia la seguente: 1 € =
1,23 $. 
Il programma deve chiedere all'utente se intende cambiare:     
- Dollari in Euro;
- Euro in Dollari.
Data una somma di denaro calcolare il controvalore.*/

/* es1  del 3-11-2024*/
#include <stdio.h>

int main() {
    int scelta;
    double somma, risultato;
    double tassoc = 1.23;

    printf("Seleziona l'operazione:\n");
    printf("1. Convertire Dollari in Euro\n");
    printf("2. Convertire Euro in Dollari\n");
    printf("Inserisci la tua scelta (1 o 2): ");
    scanf("%d", &scelta);

    if (scelta == 1) {
        printf("Inserisci la somma in Dollari: ");
        scanf("%lf", &somma);
        risultato = somma / tassoc;
        printf("Il controvalore in Euro è: %.2f\n", risultato);
    } else if (scelta == 2) {
        printf("Inserisci la somma in Euro: ");
        scanf("%lf", &somma);
        risultato = somma * tassoc;
        printf("Il controvalore in Dollari è: %.2f\n", risultato);
    } else {
        printf("Scelta non valida.\n");
    }

    return 0;
}
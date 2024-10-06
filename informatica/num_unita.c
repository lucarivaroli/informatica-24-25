#include <stdio.h>

int main() {
    int numero, migliaia, centinaia, decine, unita;
    int nc, nd;

    // Chiedi all'utente di inserire un numero minore di 10000
    printf("Inserisci un numero minore di 10000: ");
    scanf("%d", &numero);

    // Verifica che il numero sia minore di 10000
    if (numero >= 10000) {
        printf("Il numero inserito non è valido.\n");
        return 1;
    }

    // Determina il numero di cifre
    int cifre = 0;
    if (numero < 10) {
        cifre = 1;
    } else if (numero < 100) {
        cifre = 2;
    } else if (numero < 1000) {
        cifre = 3;
    } else if (numero < 10000) {
        cifre = 4;
    }
    printf("Il numero è formato da %d cifre.\n", cifre);

    // Separa le migliaia, le centinaia, le decine e le unità
    migliaia = numero / 1000;
    nc = numero - migliaia * 1000;
    centinaia = nc / 100;
    nd = nc - centinaia * 100;
    decine = nd / 10;
    unita = nd - decine * 10;

    // Visualizza le cifre separatamente
    printf("Migliaia: %d\n", migliaia);
    printf("Centinaia: %d\n", centinaia);
    printf("Decine: %d\n", decine);
    printf("Unità: %d\n", unita);

    return 0;
}
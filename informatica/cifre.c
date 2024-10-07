#include <stdio.h>

int main() 
{
    int numero, migliaia, centinaia, decine, unita;
    int nc, nd,somma;


    printf("Inserisci un numero: ");
    scanf("%d", &numero);

 
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

   
    migliaia = numero / 1000;
    nc = numero - migliaia * 1000;
    centinaia = nc / 100;
    nd = nc - centinaia * 100;
    decine = nd / 10;
    unita = nd - decine * 10;

 
    printf("Migliaia: %d\n", migliaia);
    printf("Centinaia: %d\n", centinaia);
    printf("Decine: %d\n", decine);
    printf("Unità: %d\n", unita);

  
}
#include <stdio.h>

int main() {
    int numero, migliaia, centinaia, decine, unita;
	int nc,nd;

    printf("Inserisci un numero minore di 10000: ");
    scanf("%d", &numero);


    if (numero >= 10000) {
        printf("Il numero inserito non è valido.\n");
        return 1;
    }

    
    int temp = numero;
    int cifre = 0;
    while (temp > 0) 
    {
        temp =temp/10;
        cifre=cifre+1;
    }
    printf("Il numero è formato da %d cifre.\n", cifre);

   
    migliaia = numero / 1000;
	nc=numero-migliaia*1000;
	centinaia=nc/100;
	nd=nc-centinaia*100;
	decine=nd/10;
	unita=nd-decine*10;

    
    printf("Migliaia: %d\n", migliaia);
    printf("Centinaia: %d\n", centinaia);
    printf("Decine: %d\n", decine);
    printf("Unità: %d\n", unita);

    return 0;
}
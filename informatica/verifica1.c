/*CONTARE IL NUMERO DI CIFRE DI CUI SI COMPONE UN NUMERO DATO E
COMUNICARE QUANTE VOLTE COMPARE LA CIFRA DI VALORE K CHIESTA
ALL’UTENTE.
N.B.: accettare valori che vanno da 0 a 9999
ES: 3 è composto da 1 cifra e supponendo k=5 allora k compare 0 volte, 56 è composto
da 2 cifre e k compare 1 volta*/

#include <stdio.h>
int main()
{
    int numero;
    int unita;
    int decine, nd;
    int centinaia, nc;
    int migliaia;
    

    printf("inserisci un numero:\n");
    scanf("%d", &n);

    if(n>=0 && n<=9999){
        printf("il numero va bene\n");
    }
    else
    {
        printf("il numero inserito non va bene");
    }


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
    printf("il numero e composto da: %d", cifre);

    migliaia = numero / 1000;
    nc = numero - migliaia * 1000;
    centinaia = nc / 100;
    nd = nc - centinaia * 100;
    decine = nd / 10;
    unita = nd - decine * 10;
    
    
    
    
    
    printf("le unita sono: %d\n", unita);
    printf("le decine sono: %d\n", decine);
    printf("le centinaia sono: %d\n", centinaia);
    printf("le migliaia sono: %d\n", migliaia);
    

}
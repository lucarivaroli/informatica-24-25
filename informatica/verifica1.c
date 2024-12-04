/*CONTARE IL NUMERO DI CIFRE DI CUI SI COMPONE UN NUMERO DATO E
COMUNICARE QUANTE VOLTE COMPARE LA CIFRA DI VALORE K CHIESTA
ALL’UTENTE.
N.B.: accettare valori che vanno da 0 a 9999
ES: 3 è composto da 1 cifra e supponendo k=5 allora k compare 0 volte, 56 è composto
da 2 cifre e k compare 1 volta*/

#include <stdio.h>
int main()
{
    int n;
    int unita;
    int decine, nd;
    int centinaia, nc;
    int migliaia;
    int k;

    printf("inserisci un numero:\n");
    scanf("%d", &n);

    if(n>=0 && n<=9999){
        printf("il numero va bene\n");
    }
    else
    {
        printf("il numero inserito non va bene");
    }



    migliaia = n %1000;
    centinaia = n - migliaia % 1000;
    decine = n % 10;
    
    unita = decine %10;
    
    
    
    
    
    printf("le unita sono: %d\n", unita);
    printf("le decine sono: %d\n", decine);
    printf("le centinaia sono: %d\n", centinaia);
    printf("le migliaia sono: %d\n", migliaia);
    

}
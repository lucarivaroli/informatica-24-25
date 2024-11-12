/*Scrivere un programma che chieda un numero intero in input e mostri in 
output se il numero è pari o dispari usando il metodo delle sottrazioni successive.*/

#include <stdio.h>
int main(){
    int n;

    printf("inserisci il numero:\n");
    scanf("%d", &n);

    while (n>=2)
    {
        n=n-2;
    }
    if(n==0)
    {
        printf("il numero e pari");
    }
    else
    {
        printf("il numero e dispari");
    }
    
    
}
/*Esercizio1
Dato numero a più cifre comunicare quale e quante cifre corrispondono alla propria posizione
Esempio: n1=4211 la cifra 1corrisponde alla prima posizione e la cifra 4
corrisponde alla quarta posizione.*/

#include<stdio.h>
int main(){
    int n=0; 
    int cifra=0;    
    int posizione=0;

    printf("Inserisci un numero: ");
    scanf("%d",&n);
    
    while (n>0){
        cifra=n%10;
        posizione+=1;
        printf("la cifra %d corrisponde alla posizione %d",cifra,posizione);
        n=n/10;
    }

}
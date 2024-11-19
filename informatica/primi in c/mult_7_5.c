/*Chiedere all'utente di inserire un numero 
e verificare se è multiplo di 5 e/o di 7*/

#include <stdio.h>

int main() {
    
    int numero;
    
    
    printf("inserisci un numero:\n");
    scanf("%d", &numero);
    

    if(numero%5==0 && numero%7==0){
        printf("il numero e multiplo di tutti e due");
    }else if(numero%5==0){
        printf("il numero e multiplo di 5");
    }else if(numero%7==0){
        printf("il numero e multiplo di 7");
    }else{
        printf("il numero non e multiplo di nessuno dei 2");
    }
}
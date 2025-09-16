/*Esercizio3
Leggere una serie di numeri interi passati dall’utente 
dopo aver eseguito una scelta che determini se
stampare i valori in senso crescente o decrescente e 
fermandosi al primo ‘0’ , tale da stampare solo i
valori che rendono la serie crescente o decrescente e 
restituire quanti numeri erano stati inseriti.
Esempio: scelta=crescente - l’utente inserisce: 8 35 3 8 46 - 
numeri inseriti: 5.*/

#include <stdio.h>
int main(){
    
    int n=0;
    int scelta=0;
    int contatore=0;
    int precedente=0;
    int crescente=0;
    int decrescente=0;
    
    printf("inserisci la tua scelta 1)crescente 2)decrescente: ");
    scanf("%d", &scelta);
    
    if(n>0){
    switch (scelta)
    {
    case 1:
        
        break;
    case 2:
        
        break;
    
    default:
        break;
    }
    }else{
        printf("il programma termina ")
    }
}
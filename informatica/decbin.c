/*convertire un numero de decimale a binario
introducendo un valore da 0 a 63*/
#include <stdio.h>

int main() 
{
    int n0=0;
    int n1=0;
    int n2=0;
    int n3=0;
    int n4=0;
    int n5=0;
    int num=0;
    int quoz=0;
  
    printf("Inserisci un numero tra 0 e 63: ");
    scanf("%d", &num);

    quoz=num;
    if (num>=0 && num<=63)
        //convertiamo il numero 
    {
       if(quoz!=0){
            n0=quoz%2; //in n0 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo quoziente
        }
       
        if(quoz!=0){
            n1=quoz%2; //in n0 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo quoziente
        }
       
        if(quoz!=0){
            n2=quoz%2; //in n0 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo quoziente
        }
       
        if(quoz!=0){
            n3=quoz%2; //in n0 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo quoziente
        }
        
        if(quoz!=0){
            n4=quoz%2; //in n0 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo quoziente
        }
        
        if(quoz!=0){
            n5=quoz%2; //in n0 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo quoziente
        }

        printf("il numero decimale %din binario vale: %d%d%d%d%d%d")


    
    
    
    } 
    
    else
    {
        printf("Il numero %d non rispetta la richiesta!");
    }

    return 0;
}
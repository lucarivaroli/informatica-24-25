/*Esercizio2
Calcolare quanti e quali numeri primi sono presenti 
in un ampio intervallo di valori.
Definizione di numero primo: un numero si dice primo 
se è divisibile solo per 1 e per se stesso.*/

#include<stdio.h>
int main(){
    
    int n1=0;
    int n2=0;
    int contatore=0;
    int divisore=0;
    
    printf("inserisci il primo numero: ");
    scanf("%d", &n1);
    printf("inserisci il secondo numero: ");
    scanf("%d", &n2);
    
    for (int i=n1; i<=n2; i++)
    {
        for (int j=1; j<=i; j++)
        
        if(divisore==2){
            contatore+=1;
            printf("il numero %d e primo", i);
        }
        divisore=0;
    }
    printf("i numeri primi sono %d", contatore);


}
    
    
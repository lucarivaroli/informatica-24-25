/*Esercizio4
Richiesti due numeri da tastiera verifica e comunica se sono numeri Amici/Amicali.
Definizione di numeri Amicali: due numeri si dicono 
amicali se la somma dei divisori del primo
numero è uguale al secondo numero e viceversa.*/

#include<stdio.h>
int main(){

    int n1=0;
    int n2=0;
    int i=0;
    int j=0;
    int somma2=0;
    int somma1=0;

    printf("inserisci il primo numero: ");
    scanf("%d", &n1);
    printf("inserisci il secondo numero: ");
    scanf("%d", &n2);
    
    for (int i=1; i<n1; i++)
    {
        if(n1%i==0){
            somma1+=i;
        }
    }
    for (int j=1; j<n2; j++)
    {
        if(n2%j==0){
            somma2+=j;
        }
    }
    printf("la prima somma e :%d ", somma1);
    printf("la seconda somma e: /n%d", somma2);

    if(somma1==n2 && somma2==n1){
        printf("i due numeri sono amicali");
    }
    else{
        printf("i due numeri non sono amicali");
        
    }

}
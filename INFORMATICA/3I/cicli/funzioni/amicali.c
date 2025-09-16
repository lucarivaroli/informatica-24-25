/*data una sequenza di valori verificare se i valori 
presi a coppie risultano numeri amicali
e termina quando uno dei valori e zero

Definizione di numeri Amicali: due numeri si dicono 
amicali se la somma dei divisori del primo
numero è uguale al secondo numero e viceversa.*/

#include <stdio.h>


int main(){
    int ni, n2;
    int somma1, somma2;
    int i,j;
    
    do
    {
    
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
    }while(n1 !=0 && n2 !=0)

    printf("la prima somma e :%d ", somma1);
    printf("la seconda somma e: /n%d", somma2);
}
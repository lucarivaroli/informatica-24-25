/*Esercizio
Dato un numero stampare tutto i suoi divisori*/

#include <stdio.h>
int main(){
    int n1=0;
    int ope;
    int divisore=1;

    printf("inserisci il numeero:\n");
    scanf("%d", &n1);

    do
    {
        ope=n1%divisore;
        if(ope ==0){
            printf("il divisore e:%d \n", divisore);        
            
            divisore++;
        }
    } while (n1!=divisore);
    
}
/*Scrivi un programma in C che generi un numero casuale compreso tra 1 e 20 e permetta all'utente di indovinarlo in massimo 5 tentativi. Usa la variabile flag per capire quando viene indovinata la variabile.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    
    int nc;
    int tentativi=5;
    int indovino;
    int flag=0;
   
    nc=rand() %20+1;
    printf("il numero generato è:\n");
   
    
    printf("inserisci il primo numero dei %d tentativi", tentativi);
    scanf("%d", &indovino);
    if (indovino==nc){
        flag=1;
    }
    else
    {
        tentativi--;
        printf("inserisci il secondo numero dei %d tentativi", tentativi);
        scanf("%d", &indovino);
        if (indovino==nc){
            flag=1;
        }
        else
        {
            tentativi--;
            printf("inserisci il terzo numero dei %d tentativi", tentativi);
            scanf("%d", &indovino);
            if (indovino==nc){
                flag=1;
            }
            else 
            {
                tentativi--;
                printf("inserisci il quarto numero dei %d tentativi", tentativi);
                scanf("%d", &indovino);
                if (indovino==nc){
                    flag=1;
                }
                else 
                {
                    tentativi--;
                    printf("inserisci l'ultimo numero numero dei tentativi");
                    scanf("%d", &indovino);
                    if (indovino==nc){
                        flag=1;
                    }
                }
            }
         }
    }
    
    if(flag ==0 ){
        printf("non hai indovinato");
    }else
    {
        printf("hai indovinato");
    }
 
}
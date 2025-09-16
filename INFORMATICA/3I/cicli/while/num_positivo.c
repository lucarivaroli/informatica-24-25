/*scrivi un programma che legge un numero strettamente positivo e visualizza 
tutti i numeri pari inferiori a tale numero fino a 0*/

#include <stdio.h>

int main(){
   int num;
   int cont=0;

   printf("inserisci il numero:\n");
   scanf("%d", &num);

   if(num<=0)
    {
        printf("il numero inserito non va bene");
    } 
    else
   {
        cont=num-1;
        while (cont>=0){

            if(cont%2 == 0){
                printf("%d\n", cont);
            }
        cont--;
        }    
    }
}
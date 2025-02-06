/*leggere una sequenza di numeri visualizzarla e si termina non 
appena arriva uno 0*/

#include <stdio.h>

int main(){
    int n1; //10 variabili

    printf("inserire il numero: \n");
    scanf("%d", &n1);
    
    while (n1!=0)
    {
        printf("\nil numero inserito:%d \n", n1);
         printf("inserire il numero\n");
        scanf("%d", &n1);
    }
}
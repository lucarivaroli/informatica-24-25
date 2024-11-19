/*leggere una sequenza di numeri visualizzarla e 
determinare quanti numeri sono stati inseriti
il programma termina non 
appena arriva uno 0*/

#include <stdio.h>

int main(){
    int n1; //10 variabili
    int cnt=1;

    printf("inserire il numero: \n");
    scanf("%d", &n1);
    cnt++;

    while (n1!=0)
    {
        printf("\nil numero inserito:%d \n", n1);
         printf("inserire il numero\n");
        scanf("%d", &n1);
        cnt++;
    }
    printf("hai inerito %d valori", cnt);
}
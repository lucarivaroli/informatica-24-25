/*calcolare la somma dei primi n numeri naturali
ES 5 1+2+3+4+5*/

#include <stdio.h>
int main(){
    int n=0;
    int somma=0;

    printf("inserisci il primo numero: \n");
    scanf("%d", &n);

    for (int  i = 0; i !=n+1; i++)
    {
        somma+=i;
    }
    printf("il risultato della somma e: %d", somma);
    
}


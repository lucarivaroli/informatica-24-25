/*dato un numero N calcolare il suo quadrato sommando
i primi N numeri dispari
ES N=7 7^2=49 */
#include<stdio.h>
int main(){
    int N=0;
    int somma=1;
    int dis=1;
    printf("inserisci il primo numero");
    scanf("%d", &N);
    
    for (int i = 1; i != N; i++)
    { 
        dis+=2;
        somma+=dis;
    }

    printf("il numero e: %d", somma);

    
}
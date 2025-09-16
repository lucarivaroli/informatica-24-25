/*dati 5 valori stamparli*/
//senza l'utilizzo dei cicli servono 10 variabili diversi (5 printf)
#include <stdio.h>

int main(){
    int n1; //10 variabili
    int cnt=0;//variabile contatore inizializzataa 0

    while (cnt<5)
    {
        printf("\ninserire un numero: \n");
        scanf("%d", &n1);
        cnt++;
        printf("il numero inserito e: %d\n", n1);
    }
    

    /*printf(" inserire un numero: \n");
    scanf("%d", &n1);
    cnt++;
    printf("il numero inserito e: %d", n1);

    printf(" inserire un numero: \n");
    scanf("%d", &n1);
    cnt++;
    printf("il numero inserito e: %d", n1);

    printf(" inserire un numero: \n");
    scanf("%d", &n1);
    cnt++;
    printf("il numero inserito e: %d", n1);

    printf(" inserire un numero: \n");
    scanf("%d", &n1);
    cnt++;
    printf("il numero inserito e: %d", n1);

    printf(" inserire un numero: \n");
    scanf("%d", &n1);
    cnt++;
    printf("il numero inserito e: %d", n1);*/

}
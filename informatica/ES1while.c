/*scrivi un programma che chieda all'utente un numero che sia necessariamente maggiore di 3 e che indica quanti valori della sequenza di fibonacci mostrare.
Per esempio se l'utente inserisce 6 dovranno essere mostrati 1 1 2 3 5 8.
Vedi pag 160*/

#include <stdio.h>
int main(){
    int n=0;
    int t1=1;
    int t2=1;
    int termsucc;
    int i=0;

    printf("inserisci il numero di termini:\n");
    scanf("%d", &n);

    if(n>3){
        while (i<n)
        {
            printf("%d", t1);
            termsucc=t1+t2;
            t1=t2;
            t2=termsucc;

            i++;
        }
    }
    else{
        printf("il numero non va bene");
    }
        
    

}
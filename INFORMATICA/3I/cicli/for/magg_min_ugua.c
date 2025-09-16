/*scrivi un programma che, dati in input N numeri interi un numero X,
determini:
-quanti sono maggiori di x
-quanti sono minori di x
-quanti numeri sono uguali*/
#include <stdio.h>
int main(){
    int n, x, i, maggiore=0, minore=0, uguale=0, numero;
    printf("Inserisci il numero di numeri da inserire: ");
    scanf("%d",&n);
    printf("Inserisci il numero X: ");
    scanf("%d",&x);
    for (i = 0; i < n; i++){
        printf("Inserisci il numero %d: ",numero);
        scanf("%d",&numero);
        if (numero>x){
            maggiore+=1;
        }
        if (numero<x)
        {
            minore+1;
        }
        if (numero==x)
        {
            uguale+=1;
        }
    }
    
    printf("i numeri maggiori sono %d", maggiore);
    printf("i numeri minori sono %d", minore);
    printf("i numeri uguali sono %d", uguale);
    
}
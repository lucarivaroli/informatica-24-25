/*scrivi un programma che segue il calcolo 
del fattoriale di un un numero inserito*/
#include <stdio.h>
int main(){
    int n, i, fattoriale=1;
    printf("Inserisci un numero: ");
    scanf("%d",&n);
    
    for (i = 1; i <= n; i++){
        fattoriale*=i;
    }
    printf("Il fattoriale di %d è %d", n, fattoriale);
}   
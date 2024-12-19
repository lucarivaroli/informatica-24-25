/*stampa i primi N numeri dispari successivi al numero A*/

#include <stdio.h>
int main(){
    int n=0;
    int A=0;
    int nume=0;

    printf("inserisci a: \n");
    scanf("%d", &A);
    printf("inserisci n: \n");
    scanf("%d", &n);

    for (int  i = 0; i !=n; i++)
    {
        nume+=2;
        printf("il risultati sono: %d", nume);
    }
    
    
    
}


/*dato un valore stampare i suoi fattori
ES: 28= 2*2*7    2, 2, 7
es: 36= 2*13 */


#include<stdio.h>

void stampa_fattori(int n){
    int i=0;    
    for (int i = 2; i <=n; i++){
                while (n % i==0)
                {
                    printf("%d \t", i);
                    n/=i;
                    if (n>1)
                    {
                        printf(" ");
                    }
                    
                }
    }
}



int main(){
    int numero;
    printf("inserisci il numero:  ");
    scanf("%d", &numero);
    stampa_fattori(numero);
    return 0;

}
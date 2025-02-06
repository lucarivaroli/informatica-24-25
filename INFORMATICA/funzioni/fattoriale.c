/*calcolare il fattoriale di un numero*/
#include <stdio.h>

long fattoriale(int _n);

int main(){
    int num=0;

    printf("inserisci il numero: ");
    scanf("%d", &num);

    fattoriale(num);

}

long fattoriale(int _n){
    int i=0;
    long fattoriale=1;

    
    for (int i = 1; i <= _n; i++)
    {
        fattoriale*=i;
    }
    printf("il fattoriale di %d numero e %ld", _n, fattoriale);
}

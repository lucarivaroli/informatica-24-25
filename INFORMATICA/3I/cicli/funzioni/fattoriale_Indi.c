/*calcolare il fattoriale di un numero*/
#include <stdio.h>

void fattoriale(int *_n, long *_fatt);

int main(){
    int num=0;
    long fatt=1;

    printf("inserisci il numero: ");
    scanf("%d", &num);

    fattoriale (&num, &fatt); //parametro effettivo

}

void fattoriale(int *_n, long *_fatt){
    int i=1;
    long sumfatt=1;

    
    for (int i = 1; i <= *_n; i++)
    {
        sumfatt*=i;
    }
    printf("il fattoriale di %d numero e %ld", *_n, fattoriale);
    return sumfat;
}

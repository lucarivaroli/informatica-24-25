/*letto un numero positivo, visualizzi a terminale il quadrato 
del numero stesso facendo uso soltanto di operazioni di somma*/

int quadrato(int _n){
    int quadrato=0;
    for (int i = 1; i <= _n; i++)
    {
        quadrato+=_n;
    }
    return quadrato;
}


#include <stdio.h>
int main(){
    int num=0;
    int quadrato=0;
    printf("inserisci il numero: ");
    scanf("%d", &num);

    printf("il quadrato di %d e %d", num, quadrato);
}
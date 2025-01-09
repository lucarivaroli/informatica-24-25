/*ES pag 223 n 17
scrivi un programma che ricerca i primi numneri 
perfetti e li visualizza sullo schermo
ES n=6 div=1,2,3 somma=1+2+3=6
6 - 28 - 496*/
#include <stdio.h>
int main(){
    int somma=0,numero=0, i, j;
    for (i = 1; i < 500; i++){
        for (j = 1; j <= i/2; j++)
        {
            if(i%j==0)
                somma+=j;
        }
        if (somma==i)
            {
                printf("%d\n",i);
            }
        
        somma=0;     
    } 
        
}
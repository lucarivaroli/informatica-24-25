/*Scrivi un programma che visualizzi la somma dei quadrati dei primi 12 
numeri naturali successivi a 8
es somma=9*9+10*10......*/
#include <stdio.h>
int main(){
    int i, somma=0;
    for (i = 9; i < 20; i++){
        somma+=i*i;
    }
    printf("La somma è %d", somma);
}

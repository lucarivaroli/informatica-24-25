/*VERIFICARE SE UN NUMERO È POTENZA DEL 2 E SE LO È DETERMINARE
L’ESPONENTE.*/
#include <stdio.h>
int main(){
    int n1=0;
    int esponente=0;

    printf("inserisci il numero");
    scanf("%d", n1);

    if(n1>=1 && n1<=20){
        printf("il numero va bene");
    }
    else{
        printf("il numero non va bene");
    }



}
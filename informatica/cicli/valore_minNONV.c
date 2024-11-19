/*scrivi un programma che legga una sequenza
di numeri interi terminanti con uno 0
e ne ricerca il valore minimo*/

#include <stdio.h>

int main(){
    int num, min , cnt=0;

    do{
        printf("inserisci un numero");
        scanf("%d", &num);
        
        if(num!=0){
            if(num<min || cnt==1){
            min=num;}
        cnt--;
        }

    }while(num!=0);

    if(cnt>0){
        printf("il valore minimo inserito é %d ",min);

    }

}
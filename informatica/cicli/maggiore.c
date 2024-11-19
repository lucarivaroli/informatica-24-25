/*Chiedi all'utente di inserire 10 valori numerici e alla fine mostra qual è il maggiore tra i valori inseriti.*/

#include <stdio.h>

int main(){
    int num, max , cnt=0;

    do{
        printf("inserisci un numero");
        scanf("%d", &num);
        cnt++;
        if(num>max || cnt==1)
            max=num;
    }while(cnt<=10);

    printf("il valore massimo inserito é %d ",max);

}
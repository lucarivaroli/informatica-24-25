/*Scrivi un programma che effettua il prodotto tra due numeri utilizzando il metodo delle somme 
successive dopo aver controllato l’input e accettato solo valori maggiori di 0.*/

#include <stdio.h>
int main(){
    int n1;
    int n2;
    int i;
    int somma=0;



    do{
    printf("inserisci il primo valore\n");
    scanf("%d",&n1);

    }while (n1<0);
    do{
    printf("inserisci il secondo valore\n");
    scanf("%d",&n2);

    }while (n2<0);
    
    for(i=0; i<n1; i++){
        somma+=n2; //somma=somma+num2
    }
    printf("il prodotto vale tra n1 e n2 e: %d", somma);

    

}

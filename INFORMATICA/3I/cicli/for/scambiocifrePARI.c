/*DATI  DUE  NUMERI  A  PIU' CIFRE(STESSO NUMERO DI CIFRE) SCAMBIARE 
TRA DI LORO LE CIFRE DI POSIZIONE PARI CON LE CIFRE DI POSIZIONE DISPARI*/
#include <stdio.h>
int main(){
    int num1=0, num2=0;
    int cifra1, cifra2;
    int resto1=0, resto2=0;
    int cnt1=0, cnt2=0;
    int posizione=0;

    printf("inserisci il primo numero ");
    scanf("%d", &num1);
    printf("inserisci il secondo numero ");
    scanf("%d", &num2);

 
    while(num1>0){
        resto1=num1%10;
        num1=num1/10;
        cnt1++;
    }   

    printf("il primo numero ha %d cifre", cnt1);

   
    while(num2>0){
        resto2=num2%10;
        num2=num2/10;
        cnt2++;
    }
    printf("il secondo numero ha %d cifre", cnt2);
    

    if (cnt1==cnt2)
    {
        printf("le cifre sono uguali ");
    }else{
        printf("le cifre sono diverse il programma termina");
    }
    

    
}
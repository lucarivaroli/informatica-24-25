/*Il programma letti tre numeri, determini se possono 
essere considerati in progressione aritmetica;
una progressione aritmetica è una serie di numeri in cui
la differenza tra due numeri successivi è costante.*/
//    Esercizio 1
#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    printf("Inserisci tre numeri: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    int diff1 = num2 - num1;
    int diff2 = num3 - num2;
    
    if (diff1 == diff2) {
        printf("I numeri sono in progressione aritmetica.\n");
    } else {
        printf("I numeri non sono in progressione aritmetica.\n");
    }
    
    return 0;
}
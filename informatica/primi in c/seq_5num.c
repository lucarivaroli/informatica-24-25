#include <stdio.h>

int main() { 
    int a,b,c,d,e;
 
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;

    
    printf("Inserisci il primo numero: ");
    scanf("%d", &a);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

    printf("Inserisci il terzo numero: ");
    scanf("%d", &c);

    printf("Inserisci il quarto numero: ");
    scanf("%d", &d);

    printf("Inserisci il quinto numero: ");
    scanf("%d", &e);

  
    if ( b == a+1 && c == b+1 && d == c+1 && e == d+1) 
    {
        printf("i numeri sono in sequenza.\n");
    }
    else
    {
        printf("i numeri non sono in sequenza.\n");
    }

    return 0;
}

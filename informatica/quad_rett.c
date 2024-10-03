#include <stdio.h>

int main() {
    float l1, l2,p,a;

    
    printf("Inserisci il primo lato: ");
    scanf("%f", &l1);

    printf("Inserisci il secondo lato: ");
    scanf("%f", &l2);

    
    p= (l1 + l2)*2;
    a= l1 * l2;

    
    if (l1 == l2) 
    {
        printf("Il quadrilatero è un quadrato.\n");
    }
    else
    {
        printf("Il quadrilatero è un rettangolo.\n");
    }

    printf("Perimetro: %.2f\n", p);
    printf("Area: %.2f\n", a);

    return 0;
}
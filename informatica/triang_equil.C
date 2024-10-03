#include <stdio.h>

int main() { 
    int l1, l2, l3;
 
    l1 = 0;
    l2 = 0;
    l3 = 0;

    
    printf("Inserisci il primo lato: ");
    scanf("%d", &l1);

    printf("Inserisci il secondo lato: ");
    scanf("%d", &l2);

    printf("Inserisci il terzo lato: ");
    scanf("%d", &l3);

  
    if (l1 == l2 && l2 == l3) 
    {
        printf("Il triangolo è equilatero.\n");

        int perimetro = l1 + l2 + l3;
        printf("Perimetro: %d\n", perimetro); 
        float area = (l1 * l1 * 1.73)/ 4;
        printf("Area: %.2f\n", area);
    }
    else
    {
        printf("Il triangolo non è equilatero.\n");
    }

    return 0;
}

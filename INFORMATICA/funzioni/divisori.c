#include <stdio.h>

void calcola_divisori(int n) {
    printf("Divisori di %d sono: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    
    calcola_divisori(numero);
    
    return 0;
}
/*DATO UN NUMERO N POSITIVO NON NULLO MINORE DI 20 E 
UN NUMERO COMPRESO(tra
1 e 9) STAMPARE TUTTI I MULTIPLI DI C MINORI DI N.*/

#include <stdio.h>

int main() {
    int N, C;

 
    printf("Inserisci un numero N positivo : ");
    scanf("%d", &N);

    printf("Inserisci un numero C compreso tra 1 e 9: ");
    scanf("%d", &C);

 
    if (N < 20 && C >= 1 && C <= 9) {
        
        printf("I multipli di %d minori di %d sono:\n", C, N);

        
    } else {
        printf("il numero non va bene \n");
    }

    return 0;
}

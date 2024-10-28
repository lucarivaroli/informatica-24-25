/*• Creare una sorta di menù( vedi esempio) 
tramite dei printf per la scelta dell'operazione da compiere tra due valori generati casualmente( eseguendo 
lì dove c'è bisogno gli opportuni controlli). Comunicare il risultato dell'operazione o la scelta dell'utente d
i non fare niente e uscire dal programma:ES: "Seleziona l'operazione da eseguire:
0.TERMINA 1.SOMMA 2.DIFFERENZA 3.MOLTIPLICAZIONE 4.DIVISIONE " */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int scelta;
    float n1,n2;

    // Verifica divisibilità per 3 tramite somma delle cifre
    printf("scegli l'opearzione da fare: ");
    printf("0. TERMINA\n");
    printf("1. SOMMA\n");
    printf("2. DIFFERENZA\n");
    printf("3. MOLTIPLICAZIONE\n");
    printf("4. DIVISIONE\n");

    printf("scegli l'opearzione da fare: ");
    scanf("%d", &scelta);

    srand(time(NULL));
    n1=rand() %50 +1;//genera numeri casuali tra 1 e 50
    n2=rand() %50 +1;
    printf("%2.f %2.f", n1, n2)

    
    switch (scelta) {
        case 0:
            printf("Programma terminato.\n");
            break;
        case 1:
            printf("Somma: %f\n", n1+n2);
            break;
        case 2:
            printf("Differenza: %f\n", n1-n2);
            break;
        case 3:
            printf("Moltiplicazione: %f\n", n1 * n2);
            break;
        case 4:
            printf("Divisione: %.2f\n", (float)n1 / n2);
            break;
        
        default:
            printf("Scelta non valida.\n");
    }
    

    return 0;
    }

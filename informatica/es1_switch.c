/* Dato un numero controllare se è divisibile o meno per 3 applicando la regola della somma 
delle cifre che compongono il numero. ES:   dato di input: 123 eseguo la somma delle sue cifre -> 1+2+3=6 -> 
risultato 6 -> ok 6 è multiplo di 3.NNB: qualora il numero fosse a più cifre vi fermate alla prima somma 
delle cifre e poi controllate se il risultato è divisibile per 3. • Creare una sorta di menù( vedi esempio) 
tramite dei printf per la scelta dell'operazione da compiere tra due valori generati casualmente( eseguendo 
lì dove c'è bisogno gli opportuni controlli). Comunicare il risultato dell'operazione o la scelta dell'utente d
i non fare niente e uscire dal programma:ES: "Seleziona l'operazione da eseguire:
0.TERMINA 1.SOMMA 2.DIFFERENZA 3.MOLTIPLICAZIONE  4.DIVISIONE " */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // Inizializza il generatore di numeri casuali
    int scelta, numero, a, b, somma_cifre, centinaia, decine, unita;

    // Verifica divisibilità per 3 tramite somma delle cifre
    printf("Inserisci un numero di massimo tre cifre per verificare la divisibilita' per 3: ");
    scanf("%d", &numero);

    // Estrai le cifre del numero
    centinaia = numero / 100;
    decine = (numero % 100) / 10;
    unita = numero % 10;
    somma_cifre = centinaia + decine + unita;

    if (somma_cifre % 3 == 0) {
        printf("Il numero %d è divisibile per 3.\n", numero);
    } else {
        printf("Il numero %d non è divisibile per 3.\n", numero);
    }

    // Menu delle operazioni
    printf("Seleziona l'operazione da eseguire:\n");
    printf("0. TERMINA\n");
    printf("1. SOMMA\n");
    printf("2. DIFFERENZA\n");
    printf("3. MOLTIPLICAZIONE\n");
    printf("4. DIVISIONE\n");
    
    scanf("%d", &scelta);

    if (scelta != 0) {
        a = rand() % 100;  // Genera un numero casuale tra 0 e 99
        b = rand() % 100;  // Genera un altro numero casuale tra 0 e 99
        printf("Numeri generati: a = %d, b = %d\n", a, b);
    }

    switch (scelta) {
        case 0:
            printf("Programma terminato.\n");
            break;
        case 1:
            printf("Somma: %d\n", a + b);
            break;
        case 2:
            printf("Differenza: %d\n", a - b);
            break;
        case 3:
            printf("Moltiplicazione: %d\n", a * b);
            break;
        case 4:
            if (b != 0) {
                printf("Divisione: %.2f\n", (float)a / b);
            } else {
                printf("Errore: Divisione per zero.\n");
            }
            break;
        default:
            printf("Scelta non valida.\n");
    }

    return 0;
}

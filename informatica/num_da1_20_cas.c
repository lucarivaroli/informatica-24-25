/*Scrivi un programma in C che generi un numero casuale compreso tra 1 e 20 e permetta all'utente di 
indovinarlo in massimo 5 tentativi. Usa la variabile flag per capire quando viene indovinata la variabile.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, guess, tentativi = 5;
    int flag = 0;

    // Inizializza il generatore di numeri casuali
    srand(time(NULL));
    numero = rand() % 20 + 1;

    printf("Benvenuto al gioco di indovinare il numero!\n");
    printf("Devi indovinare un numero tra 1 e 20.\n");
    printf("Hai %d tentativi per indovinare.\n", tentativi);

    for(int i = 0; i < tentativi; i++) {
        printf("Inserisci il tuo tentativo (%d rimanenti): ", tentativi - i);
        scanf("%d", &guess);

        if(guess == numero) {
            flag = 1;
            break;
        } else if(guess < numero) {
            printf("Troppo basso!\n");
        } else {
            printf("Troppo alto!\n");
        }
    }

    if(flag) {
        printf("Complimenti! Hai indovinato il numero %d.\n", numero);
    } else {
        printf("Mi dispiace, hai esaurito i tentativi. Il numero era %d.\n", numero);
    }

    return 0;
}

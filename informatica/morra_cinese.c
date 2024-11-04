/*Gioco della Morra cinese: supponendo sasso=1, carta=2, forbice=3, chiedere
all’utente la sua scelta e far generare al computer la sua.
Stabilire il vincitore.
N.B.:per chi non conoscesse il gioco: sasso vince forbice, sasso perde carta, carta perde forbice.*/

/* es2 3-11-24  Morra cinese */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int scelta_utente, scelta_computer;

    // Inizializza il generatore di numeri casuali
    srand(time(NULL));

    // Chiedi la scelta all'utente
    printf("Benvenuto al gioco della Morra cinese!\n");
    printf("Inserisci la tua scelta (1 = Sasso, 2 = Carta, 3 = Forbice): ");
    scanf("%d", &scelta_utente);

    // Genera la scelta del computer
    scelta_computer = rand() % 3 + 1;

    if(scelta_utente==1 || scelta_utente==2||scelta_utente==3 ){
    
    // Mostra le scelte
    printf("Hai scelto: ");
    switch (scelta_utente) {
        case 1: printf("Sasso\n"); break;
        case 2: printf("Carta\n"); break;
        case 3: printf("Forbice\n"); break;
        default: printf("Scelta non valida\n"); return 1;
    }

    printf("Il computer ha scelto: ");
    switch (scelta_computer) {
        case 1: printf("Sasso\n"); break;
        case 2: printf("Carta\n"); break;
        case 3: printf("Forbice\n"); break;
    }

    // Determina il vincitore
    if (scelta_utente == scelta_computer) {
        printf("Pareggio!\n");
    } else if ((scelta_utente == 1 && scelta_computer == 3) ||
               (scelta_utente == 2 && scelta_computer == 1) ||
               (scelta_utente == 3 && scelta_computer == 2)) {
        printf("Hai vinto!\n");
    } else {
        printf("Hai perso!\n");
    }}
    else{
        printf("scelta non valida");
    }

    return 0;
}
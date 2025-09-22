/* Scrivere un programma in C che gestisca un insieme di numeri interi usando un array dinamico.
Il programma deve permettere, tramite menù:
    1. Aggiungere un numero (espandendo l’array con realloc)
    2. Visualizzare tutti i numeri
    3. Cercare un numero specifico
    4. Ordinare i numeri in ordine crescente
    5. Eliminare un numero scelto
    6. Uscire
*/

#include <stdio.h>
#include <stdlib.h>

// Funzione per aggiungere un numero
void aggiungiNumero(int **array, int *dimensione, int numero) {
    *array = realloc(*array, (*dimensione + 1) * sizeof(int));
    if (*array == NULL) {
        printf("Errore!\n");
        exit(1);
    }
    (*array)[*dimensione] = numero;
    (*dimensione)++;
}

// Funzione per visualizzare tutti i numeri
void visualizzaNumeri(int *array, int dimensione) {
    if (dimensione == 0) {
        printf("Nessun numero presente.\n");
        return;
    }
    printf("Numeri presenti: ");
    for (int i = 0; i < dimensione; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Funzione per cercare un numero
void cercaNumero(int *array, int dimensione, int numero) {
    for (int i = 0; i < dimensione; i++) {
        if (array[i] == numero) {
            printf("Numero %d trovato in posizione %d.\n", numero, i);
            return;
        }
    }
    printf("Numero %d non trovato.\n", numero);
}

// Funzione per ordinare i numeri (Bubble Sort)
void ordinaNumeri(int *array, int dimensione) {
    for (int i = 0; i < dimensione - 1; i++) {
        for (int j = 0; j < dimensione - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("Numeri ordinati con successo.\n");
}

// Funzione per eliminare un numero
void eliminaNumero(int **array, int *dimensione, int numero) {
    int pos = -1;
    for (int i = 0; i < *dimensione; i++) {
        if ((*array)[i] == numero) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        printf("Numero %d non trovato.\n", numero);
        return;
    }

    // Shift a sinistra
    for (int i = pos; i < *dimensione - 1; i++) {
        (*array)[i] = (*array)[i + 1];
    }
    (*dimensione)--;

    *array = realloc(*array, (*dimensione) * sizeof(int));
    printf("Numero %d eliminato.\n", numero);
}

int main() {
    int *array = NULL;
    int dimensione = 0;
    int scelta, numero;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Aggiungere un numero\n");
        printf("2. Visualizzare tutti i numeri\n");
        printf("3. Cercare un numero specifico\n");
        printf("4. Ordinare i numeri in ordine crescente\n");
        printf("5. Eliminare un numero scelto\n");
        printf("6. Uscire\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                printf("Inserisci un numero: ");
                scanf("%d", &numero);
                aggiungiNumero(&array, &dimensione, numero);
                break;
            case 2:
                visualizzaNumeri(array, dimensione);
                break;
            case 3:
                printf("Numero da cercare: ");
                scanf("%d", &numero);
                cercaNumero(array, dimensione, numero);
                break;
            case 4:
                ordinaNumeri(array, dimensione);
                break;
            case 5:
                printf("Numero da eliminare: ");
                scanf("%d", &numero);
                eliminaNumero(&array, &dimensione, numero);
                break;
            case 6:
                printf("Uscita dal programma...\n");
                break;
            default:
                printf("Scelta non valida!\n");
        }
    } while (scelta != 6);

    free(array);
    return 0;
}


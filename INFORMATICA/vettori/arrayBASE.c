/*#include <stdio.h>

#define dim 5

int main() {
    int numeri[5] = {10, 20, 30, 40, 50};
    
    for(int i = 0; i < dim; i++) {
        printf("Elemento %d: %d\n", i, numeri[i]);
    }

    return 0;
}
*/

/*  l'utente inserisce i. valori e li salva dentro l'array
#include <stdio.h>

#define dim 5
int main() {
    int numeri[dim];

    printf("Inserisci 5 numeri:\n");
    for(int i = 0; i < dim; i++) {
        printf("Numero %d: ", i );
        scanf("%d", &numeri[i]);
    }

    printf("Hai inserito:\n");
    for(int i = 0; i < dim; i++) {
        printf("%d ", numeri[i]);
    }

    return 0;
}
*/

/* ricerca di un valore dentro l'arrey 
#include <stdio.h>

int main() {
    int numeri[] = {10, 20, 30, 30, 50};
    int cercato, trovato = 0;

    printf("Inserisci un numero da cercare: ");
    scanf("%d", &cercato);

    for(int i = 0; i < 5; i++) {
        if(numeri[i] == cercato) {
            printf("Numero trovato alla posizione %d\n", i);
            trovato = 1;
        }
    }
    if (trovato==0) {  
        printf("Numero non presente nell'array\n");
    }

    return 0;
}
*/

/* BUBBLESORT con valori gia inseriti
include <stdio.h>

// Funzione per ordinare l'array utilizzando l'algoritmo Bubble Sort
void bubbleSort(int arr[], int n) {
    // Ciclo esterno: ripete l'ordinamento per ogni elemento
    for (int i = 0; i < n - 1; i++) {
        // Ciclo interno: confronta ogni coppia di elementi adiacenti
        for (int j = 0; j < n - i - 1; j++) {
            // Se l'elemento corrente è maggiore del successivo, li scambia
            if (arr[j] > arr[j + 1]) {
                // Scambio degli elementi
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Dichiarazione e inizializzazione di un array di numeri
    int numeri[] = {50, 20, 40, 10, 30};
    int n = 5;  // Numero di elementi nell'array

    // Chiamata alla funzione bubbleSort per ordinare l'array
    bubbleSort(numeri, n);

    // Stampa dell'array ordinato
    printf("Array ordinato:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numeri[i]);
    }

    return 0; // Fine del programma
}
*/

// BUBBLESORT con valori chiesti dall'utente
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Scambio
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Chiedi all'utente il numero di elementi dell'array
    printf("Quanti numeri vuoi ordinare? ");
    scanf("%d", &n);

    // Crea un array di dimensione n
    int numeri[n];

    // Chiedi all'utente di inserire i numeri
    printf("Inserisci %d numeri:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
    }

    // Chiama la funzione bubbleSort per ordinare l'array
    bubbleSort(numeri, n);

    // Stampa l'array ordinato
    printf("Array ordinato:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numeri[i]);
    }
    printf("\n");

    return 0;
}





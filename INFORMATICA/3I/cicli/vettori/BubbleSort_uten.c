// BUBBLESORT con valori chiesti dall'utente CRESCENTE
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {.   //PARTE CHE DECIDE SE E CRESCENTE O DECRESCENTE IN BASE AL SEGNO
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
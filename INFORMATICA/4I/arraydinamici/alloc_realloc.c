#include <stdio.h>
#include <stdlib.h>

int* creavett(int n) {
    int* vettore = (int*)malloc(n * sizeof(int));
    if (vettore == NULL) {
        printf("Errore nell'allocazione della memoria!\n");
        exit(1); // termina il programma
    }
    return vettore;
}

void inseriscivalori(int* vettore, int n) {
    for (int i = 0; i < n; i++) {
        printf("Inserisci l'elemento %d: ", i + 1);
        scanf("%d", &vettore[i]);
    }
}

void stampavett(int* vettore, int n) {
    printf("Hai inserito i seguenti elementi:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", vettore[i]);
    }
    printf("\n");
}

int sommamultipli(int* vettore, int n) {
    int somma = 0;
    for (int i = 0; i < n; i++) {
        if (vettore[i] % 3 == 0) {
            somma += vettore[i];
        }
    }
    return somma;
}

void creavettdispari(int* vettore, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (vettore[i] % 2 != 0) {
            count++;
        }
    }

    int* vettoredispari = (int*)malloc(count * sizeof(int));
    if (vettoredispari == NULL) {
        printf("problema!\n");
        return 1;
    }

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (vettore[i] % 2 != 0) {
            vettoredispari[j++] = vettore[i];
        }
    }

    printf("c'è solo un numero dispari:\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t", vettoredispari[i]);
    }
    printf("\n");

    free(vettoredispari);
}

int main() {
    int* vettore = NULL;
    int n;

    printf("Quanti elementi vuoi inserire? ");
    scanf("%d", &n);

    vettore = creavett(n);
    inseriscivalori(vettore, n);
    stampavett(vettore, n);

    int somma = sommamultipli(vettore, n);
    printf("La somma dei multipli di 3 è: %d\n", somma);

    creavettdispari(vettore, n);
    //dispari= estraidispari(vettore, n, &dimDispari); --> per usare la realloc

    free(vettore);
    return 0;
}
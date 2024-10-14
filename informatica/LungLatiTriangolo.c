/*Il programma legge tre numeri e dice se possono essere le lunghezze
dei lati di un triangolo (perché un triangolo possa essere tale la
somma di ogni coppia lati deve essere maggiore dell’altro)*/
//  Esercizio 2
#include <stdio.h>

int main() {
    int lato1, lato2, lato3;

    printf("Inserisci i tre lati del triangolo: ");
    scanf("%d %d %d", &lato1, &lato2, &lato3);
    
    
    if (lato1 + lato2 > lato3 && lato1 + lato3 > lato2 && lato2 + lato3 > lato1) {
        printf("I numeri possono essere i lati di un triangolo.\n");
    } else {
        printf("I numeri non possono essere i lati di un triangolo.\n");
    }
    
    return 0;
}

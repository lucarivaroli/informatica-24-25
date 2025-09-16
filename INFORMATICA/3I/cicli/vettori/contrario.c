/*inizializzato l'array con multipli di 2
stamparlo al contrario
*/

#include<stdio.h>
#define max 10

int main(){
    int array[max], j=1;

    for (int i = 0; i < max; i++) {
        array[i] = j * 2;
        j++;
    }

    for (int i = max - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }

}

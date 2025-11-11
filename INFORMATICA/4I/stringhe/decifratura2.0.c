/*data una stringa iniziale(chiesta all'utente) 
e il fattore di cifratura (valore intero chiesto dall'utente) creare la stringa cifrata.
la stringa cifrata deve contenere tutte le lettere,
creare funziona che quando supera z riparte da a
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void cambio(char *str, int fattore) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = ((str[i] - 'a' + fattore) % 26) + 'a';
        }
    }

}




int main(){
    int decifratura=0;
    char stringa[200];
    int len=0;



    printf("inserisci il fattore di decifratura: ");
    scanf("%d", &decifratura);

    printf("inserisci una stringa: ");
    getchar(); 
    fgets(stringa, sizeof(stringa), stdin);
   


    cambio(stringa, decifratura);
    printf("stringa decifrata: %s", stringa);
    return 0;





}



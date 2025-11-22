/*data una stringa iniziale(chiesta all'utente) 
e il fattore di cifratura (valore intero chiesto dall'utente) creare la stringa cifrata
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void cambio(char *str, int fattore){
    for(int i=0; str[i]!='\0'; i++){
        str[i]= str[i]+fattore;
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
    fgets(stringa, 200, stdin);
   


    cambio(stringa, decifratura);
    printf("stringa decifrata: %s", stringa);
    return 0;

}



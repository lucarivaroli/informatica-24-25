//data una stringa scriverla all'inverso con le funzioni di libreria
//farla con malloc e funzione che inverte la stringa, scambiando gli elementi
//utilizzare una sola stringa per l'inversione

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* inverti_stringa(char* str) {
    int len = strlen(str);
    
    char* inv_str = (char*)malloc((len + 1) * sizeof(char));
    
    if (inv_str == NULL) {
        return NULL; 
    }
    
    for (int i = 0; i < len; i++) {
        inv_str[i] = str[len - 1 - i];
    }
    inv_str[len] = '\0';
    return inv_str;
}
int main() {
    char str[100];
    printf("Inserisci una stringa: ");
    fgets(str, 100, stdin);
       
    
    char* str_invertita = inverti_stringa(str);
    
    if (str_invertita != NULL) {
        printf("Stringa invertita: %s\n", str_invertita);
        free(str_invertita);
    } else {
        printf("Errore di allocazione della memoria.\n");
    }
    return 0;
}

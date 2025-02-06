/*Implementare un programma C; dato un numero intero tra 1 e 7, 
che rappresenta il giorno della
settimana, stampare il nome del giorno per esteso*/

#include <stdio.h>

int main() {
    
    int giorno;
    
    
    printf("inserisci un giorno tra 1 e 7:\n");
    scanf("%d", &giorno);
    

    switch (giorno){
        case 1:
            printf("lunedi");
        break;
        
        case 2:
            printf("martedi");
        break;
        
        case 3:
            printf("mercoledi");
        break;
        
        case 4:
            printf("giovedi");
        break;
        
        case 5:
            printf("venerdi");
        break;
        case 6:
            printf("sabato");
        break;
        
        case 7:
            printf("domenica");
        break;
    
    
    default:
        printf("scelta non valida");
        
        }
}
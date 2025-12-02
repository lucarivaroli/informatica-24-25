/*esempio di una struttura complessa
facendo accesso ai campi in modalita variabile
e in modalita puntatore alla struttura
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[20];
    int eta;
    char cognome[20];
} persona;

int main(){
    persona p1;
    persona *p2;

    //inseriamo gli elementi in p1
    printf("inserisci nome: ");
    scanf("%s", p1.nome);
    fflush(stdin);
    printf("inserisci cognome: ");
    scanf("%s", p1.cognome);
    fflush(stdin);
    printf("inserisci eta: ");
    scanf("%d", &p1.eta);
    fflush(stdin);
    //visualizziamo gli elementi di p1
    printf("\nDati persona 1: %s, %s, %d \n", p1.nome, p1.cognome, p1.eta);
    
    //ora usiamo il puntatore
    p2=malloc(sizeof(persona));
    if(p2==NULL){
        printf("errore allocazione memoria");
        return 1;
    
    }
    //inseriamo gli elementi in p2
    printf("inserisci nome: ");
    scanf("%s", p2->nome);
    fflush(stdin);
    printf("inserisci cognome: ");
    scanf("%s", p2->cognome);
    fflush(stdin);
    printf("inserisci eta: ");
    scanf("%d", &p2->eta);
    fflush(stdin);
    //visualizziamo gli elementi di p2
    printf("\nDati persona 2: %s, %s, %d \n", p2->nome, p2->cognome, p2->eta);
}
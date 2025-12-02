/*creare una struttura squadra contenentile seguenti 
informazioni: con nome, colore, punteggio
caricato un massimo di 10 squadre
stampare solo le squadre con un punteggio maggiore a 100*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[30];
    char colore[20];
    int punteggio;
} squadra;

void stampaSquadre(squadra *teams, int n){

    for(int i=0; i<n; i++){
       printf("Nome: %s, Colore: %s, Punteggio: %d\n", teams[i].nome, teams[i].colore, teams[i].punteggio);
    
    }
}


int main(){
    squadra *teams;
    int n;

    do{
        printf("inserisci il numero di squadre: ");
        scanf("%d", &n);
        fflush(stdin);
    }while(n<0 || n>10);

    teams=(squadra*)malloc(n*sizeof(squadra));
    if(teams==NULL){
        printf("errore allocazione memoria");
        return 1;  
    }
    for(int i=0; i<n; i++){  
        printf("inserisci il nome della squadra: " );
        scanf("%s", teams[i].nome);
        fflush(stdin);
        printf("inserisci il colore della squadra: ");
        scanf("%s", teams[i].colore);
        fflush(stdin);
        printf("inserisci il punteggio della squadra: ");
        scanf("%d", &teams[i].punteggio);
        fflush(stdin);  
    }
    stampaSquadre(teams, n);

    
}

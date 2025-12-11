/*visualizzare le squadre il cui allenatore presenta piu di 10 titoli e 
un pntegio della squadra superiore a 30
con funzioni
*/
#include <stdio.h>
#include <stdlib.h>


typedef struct squadra{
    char nome [20];
    char colore [20];
    int punteggio;
    struct allenatore{
        char nome [20];
        char cognome [20];
        int titoli;
    }mister;
};
typedef struct squadra squadre;

void inserisciSquadre(squadre *teams, int n){
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
        printf("inserisci il nome dell'allenatore: ");
        scanf("%s", teams[i].mister.nome);
        fflush(stdin);
        printf("inserisci il cognome dell'allenatore: ");
        scanf("%s", teams[i].mister.cognome);
        fflush(stdin);
        printf("inserisci il numero di titoli dell'allenatore: ");
        scanf("%d", &teams[i].mister.titoli);
        fflush(stdin);  
    }
}

void stampaSquadre(squadre *teams, int n){
    printf("Squadre con allenatore con piu di 10 titoli e punteggio superiore a 30:\n");
    for(int i=0; i<n; i++){
        if(teams[i].mister.titoli > 10 && teams[i].punteggio > 30){
            printf("Nome: %s, Colore: %s, Punteggio: %d, Allenatore: %s %s, Titoli: %d\n", 
                teams[i].nome, teams[i].colore, teams[i].punteggio, 
                teams[i].mister.nome, teams[i].mister.cognome, teams[i].mister.titoli);
        }
        else{
            printf("La squadra %s non soddisfa i criteri.\n", teams[i].nome);
        }
    }
}

int main(){
    squadre *teams;
    int n;

    do{
        printf("inserisci il numero di squadre: ");
        scanf("%d", &n);
        fflush(stdin);
    }while(n<0 || n>10);

    teams=(squadre*)malloc(n*sizeof(squadre));
    if(teams==NULL){
        printf("errore allocazione memoria");
        return 1;
    }
    inserisciSquadre(teams, n);
    stampaSquadre(teams, n);    
    

}










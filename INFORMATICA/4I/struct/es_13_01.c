/*Registare le informazioni di alcuni libri con titolo, autore, anno e prezzo.
Determinare il libro più costoso e il più vecchio
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char* Stringa;
struct LIBRO{
    char titolo [40];
    char autore [20];
    int anno;
    float prezzo;
};

void compatta(Stringa buffer, int lunghezza){
    if(lunghezza>0 && buffer[lunghezza-1]=='\n'){
        buffer[lunghezza-1]='\0';
        lunghezza--;
    }
}

int main(){
    struct LIBRO* libri;
    int n=3, datato, i_datato,i_costoso;
    float costoso;
    char libro[40];
    int lun;

    //allochiamo i primi3 elementi
    libri=(struct LIBRO*)malloc(n*sizeof(struct LIBRO));

    if(libri==NULL){
        printf("errore di allocazione");
        return 1;
    }

    strcpy(libri[0].titolo, "l'amore mio non muore");
    strcpy(libri[0].autore,"roberto saviano" );
    libri[0].anno=2025;
    libri[0].prezzo=19.50;

    strcpy(libri[1].titolo, "maledetti di dio");
    strcpy(libri[1].autore,"sven assel" );
    libri[1].anno=1953;
    libri[1].prezzo=13;

    strcpy(libri[2].titolo, "il diritto di contare");
    strcpy(libri[2].autore, "gino lo scrittore" );
    libri[2].anno=2022;
    libri[2].prezzo=25;
    //visualizzazione dei dati

    printf("===lista libri===\n");
    for(int i=0; i<n; i++){
        printf("libro %d: ", i+1);
        
        printf("titolo: %s\n", libri[i].titolo);
        printf("autore: %s\n", libri[i].autore);
        printf("anno: %d\n", libri[i].anno);
        printf("prezzo: %.2f\n", libri[i].prezzo);
    }
    n++;
    libri=(struct LIBRO*)realloc(libri, n*sizeof(struct LIBRO));
    if(libri==NULL){
        printf("errore di riallocazione");
        return 1;   
    }

    strcpy(libri[3].titolo, "orgoglio e pregeduzio");
    strcpy(libri[3].autore, "peppino" );
    libri[3].anno=2026;
    libri[3].prezzo=50;

    //calcoliamo il libro piu datato
    datato=libri[0].anno;
    i_datato=0;
    for(int i=1; i<n; i++){
        if(libri[i].anno<datato){
            datato=libri[i].anno;
            i_datato=i;
        }
    }
    printf("il libro piu datato e: %s", libri[i_datato].titolo);
    //libro piu costoso
    costoso=libri[0].prezzo;
    i_costoso=0;
    for(int i=1; i<n; i++){
        if(libri[i].prezzo>costoso){
            costoso=libri[i].prezzo;
            i_costoso=i;
        }
    }
    printf("il libro piu costoso e: %s", libri[i_costoso].titolo);

    printf("inserisci il libro da eliminare: ");
    fgets(libro, 40, stdin);
    compatta(libro, lun);
    lun=strlen(libro);
    for(int i=0; i<n; i++){
        if(!(strcmp(libri[i].titolo, libro))){
            for(int j=i; j<n-1; j++){
                strcpy(libri[j].titolo, libri[j+1].titolo);
                strcpy(libri[j].autore, libri[j+1].autore);
                libri[j].anno=libri[j+1].anno;
                libri[j].prezzo=libri[j+i].prezzo;

            }
            n--;
        }
    }
    libri=(struct LIBRO*)realloc(libri, n*sizeof(struct LIBRO));
    if(libri==NULL){
        printf("errore di riallocazione");
        return 1;
    }

    printf("===lista libri aggiornata===\n");
    for(int i=0; i<n; i++){
        printf("libro %d: ", i+1);
        printf("titolo: %s\n", libri[i].titolo);
        printf("autore: %s\n", libri[i].autore);
        printf("anno: %d\n", libri[i].anno);
        printf("prezzo: %.2f\n", libri[i].prezzo);
    }
    free(libri);
}

  

/*registrare le informazioni di alcuni libri
titolo, autore, anno pubblicazione
-caricare l'array
-stampare i libri
-rimuovere un libro
-cercare un libro in base al titolo
*/

#include <stdio.h>
#include <string.h>
#include<stdlib.h>

typedef struct libro{
    char titolo[30];
    char autore[30];
    int anno_pubblicazione;
}libri; 

void inseriscilibri(libri *books, int n ){
    for(int i=0; i<n; i++){
        printf("inserisci il titolo del libro: ");
        fgets(books[i].titolo, 30, stdin);
        printf("inserisci l'autore del libro: ");
        fgets(books[i].autore, 30, stdin);
        printf("inserisci l'anno di pubblicazione: ");
        scanf("%d", &books[i].anno_pubblicazione);
        while(getchar() != '\n');
        
    }
}

void stampalibri(libri *books, int n){
    printf("Elenco dei libri registrati:\n");
    for(int i=0; i<n; i++){
        printf("Titolo: %s, Autore: %s, Anno di pubblicazione: %d\n", 
            books[i].titolo, books[i].autore, books[i].anno_pubblicazione);
    }
}

void cercalibro(libri *books, int n, char titolo_cercato[]){
    int l_trovato=0;
    for(int i=0; i<n; i++){
        if(strcmp(books[i].titolo, titolo_cercato)==0){
            printf("il libro %s e' stato trovato. Autore: %s, Anno di pubblicazione: %d\n", 
                books[i].titolo, books[i].autore, books[i].anno_pubblicazione);
            l_trovato=1;
        }
        if(l_trovato==0){
            printf("il libro con titolo: %s, non e stato trovato", titolo_cercato);
        }
    }

}

void rimuovilibro(libri *books, int *n, char titolo_cercato1[]){

}




int main(){
    int n=0;
    char titolo_cercato[30];
    char titolo_cercato1[30];
    libri* books;

    printf("inserisci il numero di libri da registrare: ");
    scanf("%d", &n);


    printf("quale libro vuoi cercare: ");
    fgets(titolo_cercato, 30, stdin);
    

    printf("inserisci il titolo da eliminare ");
    fgets(titolo_cercato1, 30, stdin);

    inseriscilibri(books, n);
    stampalibri(books, n);
    cercalibro(books, n, titolo_cercato);
   



}
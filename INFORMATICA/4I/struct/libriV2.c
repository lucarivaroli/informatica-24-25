/*registrare le informazioni di alcunui libri 
titolo,autore, anno pubblicazione.
array di libri 
caricare l'array
pubblicare
rimuovere un libro
cercare un libro in base al titolo
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char titolo[100];
    char autore[50];
    int anno;
}libro;

void clear_buffer() {
    int buffer;
    while ((buffer = getchar()) != '\n'){}
}

void inserisci_libro(libro *l){


    printf("Dimmi il titolo del libro.");
    scanf("%s", (l -> titolo));
    clear_buffer();
    printf("Dimmi l'autore del libro.");
    scanf("%s", (l -> autore));
    clear_buffer();
    printf("Dimmi l'anno del libro.");
    scanf("%d", &(l -> anno));
    clear_buffer();

}
void stampa_libro(libro l){
    printf("Titolo: %s\nAutore: %s\nAnno: %d\n", l.titolo, l.autore, l.anno);
}

int main(){
    libro *libri;
    int n=0;
    printf("quanti libri vuoi inserire? ");
    scanf("%d", &n);
    libri = (libro*)malloc(n*sizeof(libro));
    for (int i = 0; i < n; i++)
    {
        printf("Inserimento dati del libro %d \n",i+1);
        inserisci_libro(&libri[i]);
    }
     for (int i = 0; i < 3; i++)
    {
        printf("\n=== Stampa libro %d ===\n",i+1);
        stampa_libro(libri[i]);
    }
}
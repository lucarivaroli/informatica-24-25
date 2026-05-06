/*CREARE UN PROGRAMMA CHE GESTISCA UNA LIBRERIA DOTATA DI DIVERSI LIBRI TALE DA POTER ESEGUIRE LE SEGUENTI OPERAZONI:
- AGGIUNTA/CREAZIONE DELLA LISTA DI LIBRI;
- RICERCA DI UN LIBRO PER NOME;
- CANCELLAZIONE DI UN LIBRO;
- MODIFICA DELL'ISBN;
- SEPARARE LA LISTA DEI LIBRI IN DUE LISTE CONTENENTI RISPETTIVAMENTE I LIBRI CREATI PRIMA DEL 2000 E QUELLI DOPO;
TUTTO VIENE GESTITO DA FILE BINARI
typedef struct{
      char autore[30];
      char titolo[30];
      char ISBN[20];
      int anno;
}Libro;*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char autore [30];
    char titolo[30];
    char ISBN[20];
    int anno;
}Libro;

void aggiuntalibri(){
    FILE *fp=fopen("libri.bin", "ab");
    if(fp==NULL){
        printf("errore");
        return;
    }
    Libro l;
    printf("Inserisci autore: ");
    scanf("%s[^\n]", l.autore);
    
    printf("Inserisci titolo: ");
    scanf("%s[^\n]", l.titolo);

    printf("Inserisci ISBN: ");
    scanf("%s[^\n]", l.ISBN);   

    printf("Inserisci anno: ");
    scanf("%d", &l.anno);
    fwrite(&l, sizeof(Libro), 1, fp);
    fclose(fp);

}

void ricercalibri(){
    char cercalibro[30];
    int trovato=0;
    printf("Inserisci il titolo del libro da cercare: ");
    scanf("%s[^\n]", cercalibro);

    FILE *fp=fopen("libri.bin", "rb");
    if(fp==NULL){
        printf("errore");
        return;
    }

    Libro l;
    while(fread(&l, sizeof(Libro),1, fp)==1){
        printf("inserisci autore del libro: ");
        printf("inserisci il titolo del libro");
        printf("inserisci ISBN del libro");
        printf("inserisci anno del libro");

        if(strcmp(l.titolo, cercalibro)==0){
            printf("Libro trovato: %s di %s, ISBN: %s, Anno: %d\n", l.titolo, l.autore, l.ISBN, l.anno);
            trovato=1;
            break;
        }
    }
    if(trovato==0){
        printf("Libro non trovato.\n");
    }
    fclose(fp);


}

void eliminalibro(){
    char cercalibro[30];
    FILE *fp=fopen("libri.bin", "rb");
    FILE *fpTmp=fopen("temp.bin", "wb");
    if(fp==NULL || fpTmp==NULL){
        printf("Errore apertura file\n");
        return;
    }
    
    printf("Inserisci il titolo del libro da eliminare: ");
    scanf("%s[^\n]", cercalibro);

    Libro l;
    while(fread(&l, sizeof(Libro), 1, fp)==1){
        if(strcmp(l.titolo, cercalibro)==0){
            printf("Libro eliminato: %s di %s\n", l.titolo, l.autore);
        } else {
            fwrite(&l, sizeof(Libro), 1, fpTmp);
        }
    }
    
    fclose(fp); 
    fclose(fpTmp);
    fp=fopen("temp.bin", "rb");
    fpTmp=fopen("libri.bin", "wb");
    while(fread(&l, sizeof(Libro), 1, fp)==1){
        fwrite(&l, sizeof(Libro), 1, fpTmp);
    }
    fclose(fp);
    fclose(fpTmp);
}

void modificaisbn(){
    char cercalibro[30];
    FILE *fp=fopen("libri.bin", "rb");
    FILE *fpTmp=fopen("temp.bin", "wb");
    if(fp==NULL || fpTmp==NULL){
        printf("Errore apertura file\n");
        return;
    }
    
    printf("Inserisci il titolo del libro da modificare: ");
    scanf("%s[^\n]", cercalibro);

    Libro l;
    while(fread(&l, sizeof(Libro), 1, fp)==1){
        if(strcmp(l.titolo, cercalibro)==0){
            printf("Libro trovato: %s di %s\n", l.titolo, l.autore);
            printf("Inserisci nuovo ISBN: ");
            scanf("%s[^\n]", l.ISBN);
            fwrite(&l, sizeof(Libro), 1, fpTmp);
        } else {
            fwrite(&l, sizeof(Libro), 1, fpTmp);
        }
    }
    fclose(fp);
    fclose(fpTmp);
}

int main(){
    int scelta;

    do{
        printf("\nMenù libreria: \n");
        printf("1. Aggiungi libro\n");
        printf("2. ricerca libri\n");
        printf("3. Elimina libro\n");
        printf("4. Modifica ISBN\n");
        printf("5. Separa libri per anno\n");
        printf("0. esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar();

        switch (scelta) {
            case 1:
                aggiuntalibri();
                break;
            case 2:
                ricercalibri();
                break;
            case 3:
                eliminalibro();
                break;
            case 4:
                modificaisbn();
                break;
            case 5:
                separalibri();
                break;
            case 0:
                printf("esci!\n");
                break;
            default:
                printf("Scelta non valida, riprova.\n");
        }
    } while(scelta != 0);




}
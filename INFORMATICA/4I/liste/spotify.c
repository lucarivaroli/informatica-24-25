#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* ---- Definizione struct necessarie ---- */
typedef struct Canzone {
    int id;
    char titolo[50];
    char artista[50];
    int durata;
    struct Canzone* next;
} Canzone;

typedef struct Lista {
    Canzone* testa;
    int lunghezza;
} Lista;

/* ---- Variabile globale per gestire l'id univoco delle canzoni ---- */
int id_univoco = 0;

/* ---- Funzioni lista di canzoni disponibili ---- */
void stampa_canzone(Canzone *c);
void set_canzone(Canzone *c);
Lista* crea_lista();
void stampa_lista(Lista *l);
void inserisci_canzone_lista(Lista *l);
void ricerca_canzone_artista(Lista *l, char* artista);
void libera_memoria(Lista* l);

/* ---- Funzioni playlist (lista circolare) ---- */
void inserisci_canzone_playlist(Lista *lista_canzoni, Lista *playlist);
void stampa_playlist(Lista* playlist);
void cancella_canzone_playlist(Lista *playlist);

/* ---- MAIN ---- */

int main() {
    Lista* lista_canzoni = crea_lista();
    Lista* playlist = crea_lista();

    int scelta;
    char artista[50];

    do {
        printf("\n===== SPOTIFY 0.0.0.1 =====\n");
        printf("1. Inserisci nuova canzone nella lista\n");
        printf("2. Stampa lista canzoni\n");
        printf("3. Cerca canzoni per artista\n");
        printf("4. Aggiungi canzone alla playlist\n");
        printf("5. Stampa playlist\n");
        printf("6. Cancella canzone dalla playlist\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar(); // pulisci buffer input

        switch (scelta) {
            case 1:
                inserisci_canzone_lista(lista_canzoni);
                break;
            case 2:
                stampa_lista(lista_canzoni);
                break;
            case 3:
                 printf("Inserisci artista da cercare: ");
                fgets(artista, 50, stdin);
                
                ricerca_canzone_artista(lista_canzoni, artista);
                break;
            case 4:
                inserisci_canzone_playlist(lista_canzoni, playlist);
                break;
            case 5:
                stampa_playlist(playlist);
                break;
            case 6:
                cancella_canzone_playlist(playlist);
                break;
            case 0:
                printf("Uscita...\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
        }

    } while (scelta != 0);

    libera_memoria(lista_canzoni);
    libera_memoria(playlist);
    return 0;
}

/* =======================================================================================
   Qui sotto vanno implementate le funzioni.
======================================================================================= */

void stampa_canzone(Canzone *c) {//stampare dati della canzone
printf("ID: %d, Titolo: %s, Artista: %s, Durata: %d sec\n", c->id, c->titolo, c->artista, c->durata);

    
}

void set_canzone(Canzone *c) {//chiedere all'utente i dati della canzone
    
    printf("Inserisci titolo canzone: ");
    fgets(c->titolo, 50, stdin);
    printf("Inserisci artista: ");
    fgets(c->artista, 50, stdin);
    printf("Inserisci durata in secondi: ");
    scanf("%d", &c->durata);
    getchar(); // pulisci buffer input
    c->id = id_univoco++;

}
   
Lista* crea_lista() {
    Lista* nuova_lista = (Lista*)malloc(sizeof(Lista));
    if (nuova_lista == NULL) {
        printf("Errore allocazione memoria per lista.\n");
        exit(1);
    }
    nuova_lista->testa = NULL;
    nuova_lista->lunghezza = 0;

    return nuova_lista; //modificare valore di ritorno
}

void stampa_lista(Lista *l) { //stampa tutte le canzoni nella lista
   Canzone* current = l->testa;
    while(current != NULL) {
         printf("ID: %d, Titolo: %s, Artista: %s, Durata: %d sec\n", 
                current->id, current->titolo, current->artista, current->durata);
         current = current->next;
    }
    

}

void inserisci_canzone_lista(Lista *l) {  //funzione che inserisce canzoni nella lista
    Canzone* nuova_canzone = (Canzone*)malloc(sizeof(Canzone));
    if (nuova_canzone == NULL) {
        printf("Errore allocazione memoria per canzone.\n");
        return;
    }
    set_canzone(nuova_canzone);
    nuova_canzone->next = l->testa;
    l->testa = nuova_canzone;
    l->lunghezza++; 
    
}

void ricerca_canzone_artista(Lista *l, char* artista) {// Cerca e stampa tutte le canzoni dell’artista indicato.
    Canzone* current = l->testa;
    int poszione = 0;

    while(current !=NULL){
        if(strcmp(current->artista, artista) == 0){
            printf("Canzone trovata alla posizione %d:\n", poszione);
            stampa_canzone(current);
        }
        current= current->next;
        poszione++;
    }
}

void libera_memoria(Lista* l) {//funzione che libera la memoria per la lista
    Canzone* current= l->testa;
    while(current !=NULL){
        Canzone* temp=current;
        current= current->next;
        free(temp);

    }
    free(l);

}

void inserisci_canzone_playlist(Lista *lista_canzoni, Lista *playlist) {
    /*
    Chiede all’utente un ID.
    Se esiste una canzone con quell’ID nella lista delle canzoni disponibili, 
    la aggiunge in fondo alla playlist circolare.
    */
    int id;
    printf("Inserisci l'ID della canzone da aggiungere alla playlist: ");
    scanf("%d", &id);
    getchar(); // pulisci buffer input
    
    Canzone* current = lista_canzoni->testa;
    while(current !=NULL){
        if(current->id==id){
            Canzone* nuova_canzone = (Canzone*)malloc(sizeof(Canzone));

            if(nuova_canzone == NULL){
                printf("Errore allocazione memoria per canzone.\n");
                return;

            }
             strcpy(nuova_canzone->titolo, current->titolo);
            strcpy(nuova_canzone->artista, current->artista);
            nuova_canzone->durata = current->durata;
            nuova_canzone->id = current->id;
            
            
            if(playlist->testa == NULL) {
                nuova_canzone->next = nuova_canzone;
                playlist->testa = nuova_canzone;
            } else {
                Canzone* ultimo = playlist->testa;
                while(ultimo->next != playlist->testa) {
                    ultimo = ultimo->next;
                }
                nuova_canzone->next = playlist->testa;
                ultimo->next = nuova_canzone;
            }
            playlist->lunghezza++;
            printf("Canzone aggiunta!\n");
            return;
        }
        current = current->next;
    }
    printf("ID %d non trovato!\n", id);
}



void stampa_playlist(Lista* playlist) {
   /*
    Stampa tutti gli elementi della playlist, 
    facendo attenzione alla natura circolare della lista.
*/
    if(playlist->testa == NULL){
        printf("Playlist vuota.\n");
        return;
    }
    Canzone* current = playlist->testa;
    do{
        stampa_canzone(current);
        current= current->next;
    }while(current != playlist->testa);
}


void cancella_canzone_playlist(Lista *playlist) {
    int id;
    printf("Inserisci l'ID della canzone da cancellare dalla playlist: ");
    scanf("%d", &id);
    getchar(); // pulisci buffer input

    if (playlist->testa == NULL) {
        printf("Playlist vuota. Nessuna canzone da cancellare.\n");
        return;
    }

    Canzone *current = playlist->testa;
    Canzone *prev = NULL;

    do {
        if (current->id == id) {

            //plylist con un solo elemento
            if (current->next == current) {
                playlist->testa = NULL;
            }
            
            else if (current == playlist->testa) {
                Canzone *ultimo = playlist->testa;
                while (ultimo->next != playlist->testa) {
                    ultimo = ultimo->next;
                }
                playlist->testa = current->next;
                ultimo->next = playlist->testa;
            }
           //canzone in mezzo o alla fine
            else {
                prev->next = current->next;
            }

            free(current);
            playlist->lunghezza--;

            printf("Canzone eliminata dalla playlist.\n");
            return;
        }

        prev = current;
        current = current->next;

    } while (current != playlist->testa);

    printf("ID %d non trovato nella playlist.\n", id);
}
    


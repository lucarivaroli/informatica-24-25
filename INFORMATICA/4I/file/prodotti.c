/*creata una struct prodotto con nome, id e prezzo
scrivere su file binario una serie di prodotti
modificare il prezzo di un prodotto dato il suo id*/
 
#include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 typedef struct {
    int id;
    char nome[50];
    float prezzo;

}prodotto;

void inserisciprodotto(){
    FILE *fp;
    fp = fopen("prodotti.dat", "ab");
    int n;
    prodotto p;

    if (fp == NULL){
        printf("Errore nell'apertura del file\n");
        return;
    }

    printf("Quanti prodotti vuoi inserire? ");
    scanf("%d", &n);
    getchar();

    for(int i=0; i<n; i++){
        printf("\nProdotto %d\n", i+1);
        printf("ID: ");
        scanf("%d", &p.id);
        getchar();
        printf("Nome: ");
        scanf(" %[^\n]", p.nome);
        getchar();
        printf("Prezzo: ");
        scanf("%f", &p.prezzo);
        getchar();

        fwrite(&p, sizeof(prodotto), 1, fp);
    }

    fclose(fp);
    printf("Prodotti aggiunti!\n");
}

void stampaprodotti(){
    
    FILE *fp= fopen("prodotti.dat", "rb");
    prodotto p;
    if(fp == NULL){
        printf("Errore nell'apertura del file\n");
        return;
    }
    printf("\n--- Elenco Prodotti ---\n");
    while(fread(&p, sizeof(prodotto), 1, fp) == 1){
        printf("ID: %d\n", p.id);
        printf("Nome: %s\n", p.nome);
        printf("Prezzo: %.2f\n\n", p.prezzo);
        
    }
    fclose(fp);
    printf("-------------------\n");
}

void cercaprodotto(int id){
    FILE *fp= fopen("prodotti.dat", "rb");
    prodotto p;
    int trovato=0;
    if(fp == NULL){
        printf("Errore nell'apertura del file\n");
        return;
    }

    while(fread(&p, sizeof(prodotto), 1, fp) == 1){// se fread restituisce 1 significa che ha letto un prodotto
        if(p.id == id){
            printf("Prodotto trovato:\n");
            printf("ID: %d\n", p.id);
            printf("nome: %s\n", p.nome);
            printf("prezzo: %.2f\n", p.prezzo);
            trovato=1;
            break;
        }
    }

    if(trovato==0){
        printf("Prodotto non trovato\n");
    }

    fclose(fp);
}

void modificaprodotto(int id, float nuovoprezzo){
    FILE *fp= fopen("prodotti.dat", "rb+");
    prodotto p;
    int trovato=0;
    if(fp == NULL){
        printf("Errore nell'apertura del file\n");
        return;
    }

    while(fread(&p, sizeof(prodotto), 1, fp) == 1){
        if(p.id == id){
            p.prezzo = nuovoprezzo;
            fseek(fp, -sizeof(prodotto), SEEK_CUR);
            fwrite(&p, sizeof(prodotto), 1, fp);
            trovato=1;
            printf("Prezzo modificato con successo\n");
            break;
        }
    }

    if(trovato==0){
        printf("Prodotto non trovato\n");
    }

    fclose(fp);
}

int main(){
    const char *file="prodotti.dat";
    int scelta, id;
    float nuovoprezzo;

    do
    {
        printf("\nMenu Prodotti\n");
        printf("1. Aggiungi prodotto\n");
        printf("2. Visualizza prodotti\n");
        printf("3. cerca prodotto\n");
        printf("4. Modifica prezzo prodotto\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar();

        switch(scelta){
            case 1:
                inserisciprodotto();
                break;

            case 2:
                stampaprodotti();
                break;
            case 4:
                printf("inserisci id del prodotto: ");
                scanf("%d", &id);
                getchar();
                printf("Inserisci nuovo prezzo: ");
                scanf("%f", &nuovoprezzo);
                getchar();
                modificaprodotto(id, nuovoprezzo);
                break;

            case 3:
                    printf("inserisci id del prodotto da cercare: ");
                    scanf("%d", &id);
                    getchar();
                    cercaprodotto(id);
                    break;

            case 0:
                printf("uscita del programma\n");
                break;
            default:
                printf("scelta non valida\n");

        }
    } while (scelta!=0);
    
    return 0;
}


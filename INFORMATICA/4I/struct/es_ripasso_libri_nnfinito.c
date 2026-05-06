/*data la struct prodotto:
    nome
    codice (int)
    quantita
    prezzo
    eseguire: 1)inserire prodotto   2)stampare elenco prodotti  3) cercare un prodotto per codice   
    4) calcolare il valore totale del magazzino
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct prodotto{
    char nome;
    int codice;
    int quantita;
    float prezzo;
}prodotto;

void inserire_prodotto(prodotto *p){
    printf("Inserisci nome prodotto: ");
    scanf("%s", p->nome);
    printf("Inserisci codice prodotto: ");
    scanf("%d", &p->codice);
    printf("Inserisci quantita prodotto: ");
    scanf("%d", &p->quantita);
    printf("Inserisci prezzo prodotto: ");
    scanf("%f", &p->prezzo);


}

void stampare_elenco(prodotto *p, int n){
    for(int i=0; i<n; i++){
        printf("Nome: %s\n", p[i].nome);
        printf("Codice: %d\n", p[i].codice);
        printf("Quantita: %d\n", p[i].quantita);
        printf("Prezzo: %.2f\n", p[i].prezzo);
    }
    
}

void cercare_prodotto(prodotto *p, int n, int codice){
    for(int i=0; i<n; i++){
        if(p[i].codice == codice){
            printf("Nome: %s\n", p[i].nome);
            printf("Codice: %d\n", p[i].codice);
            printf("Quantita: %d\n", p[i].quantita);
            printf("Prezzo: %.2f\n", p[i].prezzo);
            return;
        }
    }
    printf("Prodotto non trovato\n");
}

int main(){
    prodotto *p=(prodotto*)malloc(100*sizeof(prodotto));
    int n=0;
    int scelta;
    do{
        printf("1) Inserire prodotto\n");
        printf("2) stampare elenco prodotti\n");
        printf("3) cercare un prodotto per codice\n");
        printf("4) calcolare il valore totale ddel magazzino\n");
        printf("5) esci\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);
        switch(scelta){
            case 1:
                inserire_prodotto(&p[n]);
                n++;
                break;
              
            case 2:
                stampare_elenco(p, n);
                break;
            case 3:
                int codice;
                printf("Inserisci codice prodotto: ");
                scanf("%d", &codice);
                cercare_prodotto(p, n, codice);
                break;
            case 4:
                float totale=0;
                for(int i=0; i<n; i++){
                    totale+=p[i].quantita*p[i].prezzo;
                }
                printf("Valore totale del magazzino: %.2f\n", totale);
                break;
            case 5:
                printf("esci\n");
                break;
        }
    }while(scelta!=5);

}
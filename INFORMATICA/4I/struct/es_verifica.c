/*classe di studenti:
cognome, nome, classe, matricola 
per ogni studente dotato di matricola abbiamo le 
informazioni riguardante gli esami e il livello ragiunto
1)calcolare lo studente con piu certificazioni
*/

typedef struct {
    char nome[20];
    char cognome[20];
    char classe[3];
    int matricola;//1000-9999
    int n_certificazioni
}studente;

typedef struct{
    int matricola;
    struct esame{
        char corso[20];
        int livello;//(1-3)

    };
}certificazioni;

void inserisciStudenti(studente *studentee, int n){
    for(int i=0; i<n; i++){
        printf("inserisci il nome dello studente: ");
        scanf("%s", studente[i].nome);
        printf("inserisci il cognome dello studente: ");
        scanf("%s", studente[i].cognome);
        printf("inserisci la classe dello studente: ");
        scanf("%s", studente[i].classe);
        printf("inserisci la matricola dello studente: ");
        scanf("%d", studente[i].matricola);

    }

}

void inserisciCertificazioni(certificazioni *cert, int m){
    for(int i=0; i<m; i++){
        printf("inserisci la matricola dello studente: ");
        scanf("%d", cert[i].matricola);
        printf("inserisci il corso della certificazione: ");
        scanf("%s", cert[i].esame.corso);
        printf("inserisci il livello della certificazione: ");
        scanf("%d", &cert[i].esame.livello);
    }
}

int main(){
    struct studente *studenti;
    struct certificazioni *cert;
    int n=3;
    //inserimento dei dati
    studenti= (studente*) malloc (n*sizeof(studente));
    certificazioni= (certificazioni*) malloc (n*sizeof(certificazioni));

    if(studenti==NULL || cert==NULL){
        printf("errore di allocazione");
        return 1;
    }



}
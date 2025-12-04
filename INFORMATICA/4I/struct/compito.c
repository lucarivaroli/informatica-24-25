/* creare una struct. Squadra contenente le seguenti
informazioni: nome, colore, punteggio e le informazioni del proprio
alenatore (nome, cognome, titoli)
caricato un massimo di 10 squadre stampare quelle
con punteggio superiore a 100 e numero di titoli per allenatore superiore a 10
*/
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
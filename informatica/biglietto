#include <stdio.h>

int main() {
    int studenti, studenti_minori, numgratuiti;
    float costobiglietto, costototale, costoscontato;

    
    printf("Inserisci il numero totale di studenti: ");
    scanf("%d", &studenti);

    
    printf("Inserisci il numero di studenti con meno di 15 anni: ");
    scanf("%d", &studenti_minori);

    
    printf("Inserisci il costo del biglietto: ");
    scanf("%f", &costobiglietto);

    
    numgratuiti = studenti / 12;

    
    costoscontato = costobiglietto * 0.6;

    
    costototale = (studenti - numgratuiti - studenti_minori) * costobiglietto +
                   studenti_minori* costoscontato;

    printf("L'importo totale da pagare è: %.2f euro\n", costototale);

    return 0;
}

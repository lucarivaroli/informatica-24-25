/*Un grande magazzino ha 4 reparti, rappresentati con i numeri da 1 a 4.
La Direzione decide di applicare sui prodotti di ciascun reparto
sconti con percentuali differenziate:-  reparto
   1 = nessuno sconto -  reparto
   2 = sconto 3%-  reparto
   3 = sconto 2%-  reparto
   4 = sconto 5%
Dati reparto di appartenenza e prezzo di un prodotto, calcolare e
visualizzare il prezzo scontato.*/

/* es3 3-11-24 */
#include <stdio.h>

int main() {
    int reparto;
    double prezzo, prezzo_scontato;

    // Chiedi il reparto di appartenenza del prodotto
    printf("Inserisci il reparto di appartenenza (1-4): ");
    scanf("%d", &reparto);

    // Chiedi il prezzo del prodotto
    printf("Inserisci il prezzo del prodotto: ");
    scanf("%lf", &prezzo);

    // Calcola il prezzo scontato in base al reparto
    switch (reparto) {
        case 1:
            prezzo_scontato = prezzo;  // nessuno sconto
            break;
        case 2:
            prezzo_scontato = prezzo * (1 - 0.03);  // sconto 3%
            break;
        case 3:
            prezzo_scontato = prezzo * (1 - 0.02);  // sconto 2%
            break;
        case 4:
            prezzo_scontato = prezzo * (1 - 0.05);  // sconto 5%
            break;
        default:
            printf("Reparto non valido.\n");
            return 1;
    }

    // Visualizza il prezzo scontato
    printf("Il prezzo scontato è: %.2f\n", prezzo_scontato);

    return 0;
}

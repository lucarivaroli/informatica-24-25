/*
    PROTOTIPI DELLE FUNZIONI
*/
void stampaVettore(int vettore[], int dim, char sep);
/**funzione che stampa un vettore
 * @param int vettore[] vettore da stampare
 * @param int dim dimensione del vettore
 * @param char sep separatore tra i valori
 */

void richiediValori(int vettore[], int dim);
/**funzione che richiede i valori da inserire in un vettore
 * @param int vettore[] vettore in cui inserire i valori
 * @param int dim dimensione del vettore
 */

void caricaVettoreRandom(int vettore[], int dim, int min, int max);
/**funzione che carica un vettore con valori random
 * @param int vettore[] vettore da caricare
 * @param int dim dimensione del vettore
 * @param int min valore minimo
 * @param int max valore massimo
 */

float mediaVettore(int vettore[], int dim);
/**funzione che calcola la media dei valori di un vettore
 * @param int vettore[] vettore di cui calcolare la media
 * @param int dim dimensione del vettore
 * @return float media dei valori del vettore
 */

int sommaVettore(int vettore[], int dim);
/**funzione che calcola la somma dei valori di un vettore
 * @param int vettore[] vettore di cui calcolare la somma
 * @param int dim dimensione del vettore
 * @return int somma dei valori del vettore
 */

int contaValore(int vettore[], int dim, int valore);
/**funzione che conta quante volte un valore compare in un vettore
 * @param int vettore[] vettore in cui cercare il valore
 * @param int dim dimensione del vettore
 * @param int valore valore da cercare
 * @return int numero di volte in cui il valore compare nel vettore
 */
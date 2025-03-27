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

/**
 * questa funzione restituisce la posizione del primo elemento nell'array che ha valore uguale alla variabile valore, se non trova l'elemento restituisce -1
 * @param int* vettore in ingresso
 * @param int dimensione del vettore
 * @param int valore da ricercare
 * @return int posizione del primo elemento uguale a valore o -1 se non trovato
 */
int ricercaSequenziale(int *vettore, int dim, int valore);


/**
 * questa funzione restituisce la posizione del primo elemento in un array ORDINATO in ordine crescente che ha valore uguale alla variabile valore, se non trova l'elemento restituisce -1
 * @param int[]vettore in ingresso
 * @param int dimensione del vettore
 * @param int indice dell'elemento da cui parte la ricerca
 * @param int indice dell'elemento a cui arriva la ricerca
 * @param int valore da ricercare
 * @return int posizione del primo elemento uguale a valore o -1 se non trovato
 */
int ricercaBinaria(int array[], int dim, int estInf, int estSup, int valore);

/**
 * Funzione che riempie un vettore di dimensione dim con numeri casuali in ordine crescente
 * @param int[] vett vettore da riempire
 * @param int dim dimensione del vettore
 * @param int minimo valore minimo
 * @param int massimo valore massimo
 */
void riempiVettoreOrdinatoCasuale(int vett[], int dim, int minimo, int massimo);

int trovaPosizione (int vett[], int dim, int num);
/**
 * Funzione che restituisce la posizione in cui inserire un numero in un vettore ordinato in ordine crescente
 * @param int[] vett vettore in cui cercare la posizione
 * @param int dim dimensione del vettore
 * @param int num numero da inserire
 */

 void shiftDx (int vett[], int dim, int pos);
/**
 * Funzione che sposta tutti gli elementi di un vettore a destra a partire dalla posizione pos
 * @param int[] vett vettore da spostare
 * @param int dim dimensione del vettore
 * @param int pos posizione da cui iniziare lo spostamento
 */

 void scambiavettori(int vett[], int dim, int vett2[], int dim2);
/**
 * Funzione che scambia i valori di due vettori
 * @param int[] vett vettore da scambiare
 * @param int dim dimensione del vettore
 * @param int[] vett2 vettore da scambiare
 * @param int dim2 dimensione del vettore
 */

/*CONTARE IL NUMERO DI CIFRE DI CUI SI COMPONE UN NUMERO DATO E
COMUNICARE QUANTE VOLTE COMPARE LA CIFRA DI VALORE K CHIESTA
ALL’UTENTE.
N.B.: accettare valori che vanno da 0 a 9999
ES: 3 è composto da 1 cifra e supponendo k=5 allora 
k compare 0 volte, 56 è composto
da 2 cifre e k compare 1 volta*/

#include <stdio.h>
int main()
{
    int numero; 
    int n; // cifra k
    int unita;
    int decine, nd;
    int cntc; //contantore cifre
    int cntn;  //contatore cifre uguali a k
    int r, q;
    

    printf("inserisci un numero:\n");
    scanf("%d", &n);
    printf("inserisci la cifra da cercare: \n");
    scanf("%D", &n);

    q=numero;

    if(numero>=0 && nnumero<=9999 && n>=0 && n<=9){
        if(q!=0){
            r=q%10
            q=q/10
            cntc++;
            printf("la cifra delle unita e: %d", r);
            if(r==n)
            cntn++;
        }
    }
    else
    {
        printf("hai inserito un valore non valido: ");
    }
}
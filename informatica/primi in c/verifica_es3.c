/*DATA UNA COPPIA DI NUMERI INTERI COSTRUIRE UN MENÙ TALE CHE
PREVEDA:
1) LA SOMMA IN VALORE ASSOLUTO;
2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE;
3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI
AVVICINA DI PIÙ;
4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n1=0;
    int n2=0;
    int k;
    int scelta;
    int somma;
    int scarto1:
    int scarto2;
    

    printf("inserisci il primo numero:\n");
    scanf("%d", &n1)

    printf("inserisci il secondo numero:\n");
    scanf("%d", &n2)

    printf("scegli tra le opzioni:\n");
    printf("1) LA SOMMA IN VALORE ASSOLUTO;
            2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE;
            3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI
            AVVICINA DI PIÙ;
            4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.");
    scanf("%d", scelta);

    switch (scelta)
    {
    case 1:
            somma= n1+n2;
            printf("la somma dei due valori e:%d\n", somma);
    break;
    case 2:
        if(n1>n2)
        {
            printf("la sottrazione e:%d\n", n1-n2):
        }
        else
        {
            printf("la sottrazione e:%d\n", n2-n1);
        }
    break;
    case 3:
        srand(time(NULL));
        k= rand()%9 +0;

        print("valore di k:\n %d", k)

        int minore;
        int maggiore;
        float ope1=0;
        float ope2=0;
        scarto1=n1-k;
        scarto2=n2-k;

        if(ope1>ope2){
            printf("il primo numero e piu vicino");
        }
        else{
            printf("il secondo numero epiu vicino");
        }
    break;
    case 4:
        if(n1>=n2){
            if(n1%n2==0 && n1!=n2)
            printf("il primo numero e multiplo del secondo");
        }
        else if(ope4==0){
            printf("il primo numero e multiplo del secondo");

        }
        else{
            printf("i due numeri non sono multipli");
        }
    break;
    
    default:
       
    }


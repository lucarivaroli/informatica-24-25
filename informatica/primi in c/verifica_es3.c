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
    int temp;
    int scelta;
    int opes;
    int temp;
    int somma;
    int ope3:
    

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
        if(n1>n2){
            n1=temp;
            n1=n2
            n2=temp
            opes= n1-n2
            printf("la sottrazione e:%d\n", opes):
        }else if(n2>n1){
            n2=temp;
            n2=n1;
            n1=temp;
            opes=n2-n1;
            printf("la sottrazione e:%d\n", opes);
        }
    break;
    case 3:
        srand(time(NULL));

        int random_max=50;
        int random min=1;
        int k= rand()%random_max+random_min;

        print("il numero corrisponde", k)

        int minore;
        int maggiore;
        float ope1=0;
        float ope2=0;
        ope1=k-n1;
        ope2=k-n2;

        if(ope1>ope2){
            printf("il primo numero e piu vicino");
        }
        else{
            printf("il secondo numero epiu vicino");
        }
    break;
    case 4:
        int ope4
        ope3=(float)n1%n2;
        ope4=(float)n2%n1
        if(ope3==0){
            printf("il secondo numero e multiplo del primo");
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

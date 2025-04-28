/*creiamo un menu di richieste 
1)creare un array 
2)stapare un array
3)ordinare array con bubble sort */

#include<stdio.h>
#include "libreria.c"
#include "time.h"

#define DIM 5

int main(){
    int vett[DIM]={};
    int scelta;

    do
    {
        printf("\nMENU");
        printf("\n1)creare un array ");
        printf("\n2)stapare un array ");
        printf("\n3)ordinare array con bubble sort ");
        printf("\ndigita 0 per terminare ");
        scanf("%d", &scelta);

        switch (scelta)
        {
            case 1:{
                riempiVettore( vett, DIM);
                break;
            }
            default:
            break;

            case 2:{
                stampaVettore( vett, DIM, '-');
                break;
            }
        
        }
            
            
    } while (scelta!=0);


    


}
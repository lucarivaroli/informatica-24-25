#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    int anno;
    int giorno;
    int mese;
    int bisestile;
    int anno1;
    int mese1;
    int giorno1;


    srand(time(NULL));

    anno = rand() % 5 + 2020;
    printf("il valore dell'anno e:%d \n", anno);
        if(anno%100==0){
            if (anno%400==0){
                printf("L'anno è bisestile");
                bisestile=1;
            }
        }
        else{
            if (anno%4==0){
                printf("L'anno è bisestile");
                bisestile=1;
            }
        }
    mese =rand()%12+0;
    printf("il valore del mese e: %d\n", mese);

    if(mese==2){
        giorno=28;
    }
        if(mese==11 || mese==4 || mese==6 || mese==9){
            giorno=30;   
        }
            if(mese==1 || mese==3 || mese==5 || mese==7|| mese==8|| mese==10 || mese==12){
                giorno=31;
            }
        
    giorno=rand()%mese+1;
    printf("il valore del giorno e: %d\n", giorno);

    printf("la data generata e:\n %d,%d,%d", giorno, mese, anno);


    if (giorno<20)
    {
        giorno1=giorno+20;
        mese=mese1;
        anno=anno1;
    }
        if (giorno>20 )
        {
            
            mese++;
            
        }
            if (giorno>20 && mese>12)
            {
                
                anno++;
            }

    printf("la data finale e %d %d %d", giorno1, mese1, anno1);
    
    
    
    
}
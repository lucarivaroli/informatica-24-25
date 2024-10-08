/*data una data gg mm aaaa
verificare se la data è accettabile*/

#include <stdio.h>

int main() 
{
    int giorno=0,mese=0,anno=0, bisestile=0;

  
    printf("Inserisci giorni mesi e anni: ");
    scanf("%d%d%d", &giorno, &mese, &anno);

    //un anno è bisestile se e multiplo di 4 ma non di 100
    //un anno e bisestile
    if (anno%100==0) 
    {
        if(anno%400==0){
            printf("l'anno è bisestile");
            bisestile=1;
        }
    } 
    else
    {
        if(anno%4==0){
            printf("l'anno è bisestile");
            bisestile=1;
        }
    }

// controllo del mese edel giorno
    if(mese>=1 && mese<=12){
        if(mese==2){
            if(giorno>=1 && giorno<=28+bisestile){
                printf("la data è accettabile");
            }
        }
        else{
            if(mese==11 || mese==4 || mese==6 || mese==9){
                if(giorno>=1 && giorno<=30){
                    printf("la data è accettabile");

                }
            }
            else{
                if(giorno>=1 && giorno<=31){
                    printf("la data è accettabile");  
                }
            }
        }
    }


}
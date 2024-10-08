/*data una data gg mm aaaa
verificare se la data è accettabile*/

#include <stdio.h>

int main() 
{
    int giorno=0,mese=0,anno=0;

  
    printf("Inserisci giorni mesi e anni: ");
    scanf("%d%d%d", &giorno, &mese, &anno);

    //un anno è bisestile se e multiplo di 4 ma non di 100
    //un anno e bisestile
    if (anno%100==0) 
    {
        if(anno%400==0){
            printf("l'anno è bisestile");
        }
    } 
    else
    {
        if(anno%4==0){
            printf("l'anno è bisestile")
        }
    }


}
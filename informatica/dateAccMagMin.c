#include <stdio.h>

int main() {

    int g1, m1, a1;
    int g2, m2, a2;
    int bisestile;
    int anno, mese, giorno;

 
    printf("Inserisci la prima data gg mm aaaa: ");
    scanf("%d %d %d", &g1, &m1, &a1);

    printf("Inserisci la seconda data gg mm aaaa: ");
    scanf("%d %d %d", &g2, &m2, &a2);

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
    //controllo del mese e del giorno
    if (mese>=1 && mese <=12){
        if (mese==2){
            if(giorno>=1 && giorno<=28+bisestile){
                printf("\nLa data è accettabile");
            }
            else{
                printf("\nLa data non è accettabile");
            }
        }
        else{
            if( mese==11 || mese==4 || mese==6 || mese==9){
                if (giorno>=1 && giorno<=30){
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
            else{
                if (giorno>=1 && giorno<=31){
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
        }
    }
    else{
        printf("\nLa data non è accettabile");
    }
      
    
    if (a1 > a2) {
        printf("La data più recente è: %02d/%02d/%04d\n", g1, m1, a1);
    } else if (a1 < a2) {
        printf("La data più recente è: %02d/%02d/%04d\n", g2, m2, a2);
    } else {
        if (m1 > m2) {
            printf("La data più recente è: %02d/%02d/%04d\n", g1, m1, a1);
        } else if (m1 < m2) {
            printf("La data più recente è: %02d/%02d/%04d\n", g2, m2, a2);
        } else {
            if (g1 > g2) {
                printf("La data più recente è: %02d/%02d/%04d\n", g1, m1, a1);
            } else if (g1 < g2) {
                printf("La data più recente è: %02d/%02d/%04d\n", g2, m2, a2);
            } else {
                printf("Le due date sono uguali.\n");
            }
        }
    }

    return 0;
}
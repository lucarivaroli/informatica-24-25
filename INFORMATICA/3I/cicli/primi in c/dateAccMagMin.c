#include <stdio.h>

int main() {

    int g1, m1, a1;
    int g2, m2, a2;
    int bisestile;
    

 
    printf("Inserisci la prima data gg mm aaaa: ");
    scanf("%d %d %d", &g1, &m1, &a1);

    printf("Inserisci la seconda data gg mm aaaa: ");
    scanf("%d %d %d", &g2, &m2, &a2);

    if(a1%100==0){
    if (a1%400==0){
            printf("L'a1 è bisestile");
            bisestile=1;
        }
    }
    else{
        if (a1%4==0){
            printf("L'a1 è bisestile");
            bisestile=1;
        }
    }
    //controllo del m1 e del g1
    if (m1>=1 && m1 <=12){
        if (m1==2){
            if(g1>=1 && g1<=28+bisestile){
                printf("\nLa data è accettabile");
            }
            else{
                printf("\nLa data non è accettabile");
            }
        }
        else{
            if( m1==11 || m1==4 || m1==6 || m1==9){
                if (g1>=1 && g1<=30){
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
            else{
                if (g1>=1 && g1<=31){
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


    //controllo seconda data

        if(a2%100==0){
    if (a2%400==0){
            printf("L'a1 è bisestile");
            bisestile=1;
        }
    }
    else{
        if (a2%4==0){
            printf("L'a2 è bisestile");
            bisestile=1;
        }
    }
    //controllo del m2 e del g2
    if (m2>=1 && m2 <=12){
        if (m2==2){
            if(g2>=1 && g2<=28+bisestile){
                printf("\nLa data è accettabile");
            }
            else{
                printf("\nLa data non è accettabile");
            }
        }
        else{
            if( m2==11 || m2==4 || m2==6 || m2==9){
                if (g2>=1 && g2<=30){
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
            else{
                if (g2>=1 && g2<=31){
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
      
    
    if (a1 > a2) 
    {
        printf("La data più recente è: %02d/%02d/%04d\n", g1, m1, a1);
    } 
    else if (a1 < a2) 
    {
        printf("La data più recente è: %02d/%02d/%04d\n", g2, m2, a2);
    } 
    else 
    {
        if (m1 > m2) 
        {
            printf("La data più recente è: %02d/%02d/%04d\n", g1, m1, a1);
        } 
        else if (m1 < m2) 
        {
            printf("La data più recente è: %02d/%02d/%04d\n", g2, m2, a2);
        } 
        else 
        {
            if (g1 > g2) 
            {
                printf("La data più recente è: %02d/%02d/%04d\n", g1, m1, a1);
            } 
            else if (g1 < g2) 
            {
                printf("La data più recente è: %02d/%02d/%04d\n", g2, m2, a2);
            } 
            else 
            {
                printf("Le due date sono uguali.\n");
            }
        }
    }

    return 0;
}
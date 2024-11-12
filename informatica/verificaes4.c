/*VERIFICARE SE UN NUMERO È POTENZA DEL 2 E SE LO È DETERMINARE
L’ESPONENTE.*/
#include <stdio.h>
int main(){
    int n1=0;
    int esponente=0;
    int ope, ope1, ope2, ope3, ope4;
    int flag=0;

    printf("inserisci il numero");
    scanf("%d", &n1);

    ope=n1%2;
    if(ope==0)
    {
        flag=1
        ope1= ope/2
        printf("il numero dell'espponente e: %d", flag)
        
        if(ope1==0)
        {
            flag=+1;
            ope2= ope1/2;
            printf("il numero dell'espponente e: %d", flag);
            
            if(ope2==0)
            {
                flag=+1;
                ope3= ope2/2;
                printf("il numero dell'espponente e: %d", flag);
                
                if(ope3==0)
                {
                    flag=+1;
                    printf("il numero dell'espponente e: %d", flag);
                }
                else{
                    printf("il numero non e la potenza");
                }
            }
            else 
            {
                printf("il numero non e la potenza")
            }
        }
        else
        {
            printf("il numero non e la potenza");
        }
    else{
        printf("il numero non e la potenza del 2");
    }
    
    
    if(n1>=1 && n1<=20){
        printf("il numero va bene");
    }
    else{
        printf("il numero non va bene");
    }



}
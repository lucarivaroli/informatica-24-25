#include<stdio.h>

int main(){
    int scelta, num, min_max, cnt=0;

    printf("scegli se la sequenza deve essere: ");
    printf("1) crescente");
    printf("2) decrescente");
    scanf("%d", &scelta);

    printf("inserisci il valore ");
    scanf("%d", num);

    while (num!=0)
    {
       switch (scelta)
       {
       case 1:
        {
            if (num>=min_max){
                min_max=num;
                printf("%d", min_max);
            }
            break;
        }
        case 2:
        {
            if (num>=min_max){
                min_max=num;
                printf("%d", min_max);
            }
            break;
        }
       
       default:{
            printf("non hai eseguito la scelta giusta");
       }
        
    }
    printf("inserisci un nuovo valore");
    scanf("%d", &num);
    }
    printf("sono stati inseriti %d valori", cnt);
}
#include <stdio.h>

int main() 
{
   
    float n1= 0;
    float n2= 0;
    float n3=0;
    float media=0;
    float max=0;
    float min=0;
    

    
    printf("Inserisci i numeri: ");
    scanf("%f%f%f", &n1,&n2,&n3);

   
    media= (n1+n2+n3)/3;
    printf("la media dei tre valori è: %0.2f " ,media);
    
    

    return 0;
}
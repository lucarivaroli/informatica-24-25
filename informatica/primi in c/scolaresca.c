#include <stdio.h>

int main() 
{
    int alunni;
    float cb= 12.50;
    float sd= 0.5;
    float ct;
    

    
    printf("Inserisci il numero di alunni: ");
    scanf("%d", &alunni);

   
    ct= (alunni*cb)+(2*cb*sd);
    
    
   printf("il costo totale per la scolaresca e: %.2f", ct);
    
    

    return 0;
}

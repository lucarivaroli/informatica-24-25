/*verificare se un numero dato in input è divisibile sia per 3 e per 5*/

#include <stdio.h>

int main() 
{
    int A;

  
    printf("Inserisci un numero: ");
    scanf("%d", &A);

    
    if (A % 3 == 0 & A % 5 == 0) 
    {
        printf("Il numero %d è divisibile sia per 3 che per 5", A);
    } 
    else
    {
        printf("Il numero %d non è divisibile sia per 3 che per 5", A);
    }

    return 0;
}
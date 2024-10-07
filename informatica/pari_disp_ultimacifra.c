#include <stdio.h>

int main() 
{
   
    int n1=0, cifra=0;

    printf("Inserisci il primo numero: ");
    scanf("%d", &n1);
    cifra=n1%10;

    if(cifra%2==0)
    {
        printf("il numero è pari: ",n1); 
    }
    else
    {
        printf("il numero è dispari: ",n1); 
    }

return 0;
    
    
}

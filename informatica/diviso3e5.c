#include <stdio.h>

int main() 
{
    float a;

    
    printf("Inserisci il numero: ");
    scanf("%f", &a);


    if(a %3== 0)
	{ 
		printf(" %f è divisibile per 3 ", a);  
	}
	else 
	{
		printf(" %f non è divisibile per 3 ", a);
	}

    if(a %5== 0)
	{ 
		printf(" %f è divisibile per 5 ", a);  
	}
	else 
	{
		printf(" %f non è divisibile per 5 ", a);
	}

    if(a %3== 0, a %5== 0)
	{ 
		printf(" %f è divisibile per 3 e per 5 ", a);  
	}
	else 
	{
		printf("%f non è divisibile ne per 3 ne per 5 ", a);
	}
   
    

    return 0;
}

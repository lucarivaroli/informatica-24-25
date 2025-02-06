#include <stdio.h>
int main()
{ 
	int a,b;	
	
	a=0;
	b=0;
	
	
	printf("inserisci il primo valore:");
	scanf("%d",&a);

	printf("inserisci il secondo valore:");
	scanf("%d",&b);
	


	if(a == b)
	{ 
		printf("il primo valore %d è uguale del secondo %d", a,b);  
	}
	else 
    {
        if(a < b)
        {
            printf("il primo valore %d è minore del secondo", a,b);

        }
        else
        {
            if(a > b)
            {
                printf("il primo valore %d è maggiore del secondo", a,b);
            }
	
        }
	
    }

    

   
}
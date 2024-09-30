#include <stdio.h>
int main()
{ 
	float a,b,c,media;	
	
	
	
	printf("inserisci il primo valore:");
	scanf("%f",&a);

	printf("inserisci il secondo valore:");
	scanf("%f",&b);
	
    printf("inserisci il terzo valore:");
	scanf("%f",&c);
	
	media= (a+b+c)/3;
	

	if(a>b>c);
	{ 
		printf("%f è il numero maggiore", a);
        printf("%f è il numero maggiore", c);
	}
	else 
	{
		if(b>c>a);
        {
        printf("%f è il numero maggiore", b);
        printf("%f è il numero maggiore", a);
        }
	}

    else
    {
        printf("%f è il numero maggiore", c);
        printf("%f è il numero maggiore", b);
    }

    printf("la media dei tre valori è", media);

		return 0;
	
}
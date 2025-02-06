#include <stdio.h>
int main()
{ 
	float a,b,quadrato;	
	
	a=0;
	b=0;
	quadrato=0;
	
	printf("inserisci il primo valore:");
	scanf("%f",&a);

	printf("inserisci il secondo valore:");
	scanf("%f",&b);
	
	quadrato=b*b;
	
	printf("il doppio è: %f",quadrato);

	if(a == quadrato)
	{ 
		printf("il primo valore %f è il quadrato del secondo %f", a,b);  
	}
	else 
	{
		printf("il primo valore %f non è il quadrato del secondo %f", a,b);
	}

		return 0;
	
}
#include <stdio.h>
int main()
{ 
	int a,doppio;	//dichiarazione delle variabili
	
	a=0;
	doppio=0;
	
	
	printf("inserisci un numero: ");
	scanf("%d",&a);
	doppio= a*2;
	
	printf("il doppio di a e: %d", doppio);
	
	return 0;
	
}
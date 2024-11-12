/* ESERCIZIO
calcola l'area di un triangolo
inserendola base e l'altezza
*/

#include <stdio.h>
int main()
{ 
	int base;
	int altezza;
	float area;	
	

	printf("inserisci la base: ");
	scanf("%d",&base);
	
	printf("inserisci la altezza: ");
	scanf("%d",&altezza);
	
	area= (float)(base*altezza)/2;
	
	printf("l'area del triangolo e: %.2f", area);
	
	return 0;
	
}

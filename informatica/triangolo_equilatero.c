#include <stdio.h>
int main()
{ 
	int l1, l2, l3;
	int perimetro=l1+l2+l3;
	float area=(l1*l1*1.73)/4;
	
	l1=0;
	l2=0;
	l3=0;
	
	printf("inserisci il primo lato:");
	scanf("%d",&l1);

	printf("inserisci il secondo lato:");
	scanf("%d",&l2);

	printf("inserisci il terzo lato:");
	scanf("%d",&l3);

	if(l1==l2 && l2==l3)
	{
		printf("il triangolo è equilatero");
		
		printf("il perimetro del triangolo é:",perimetro);
		
		printf("l'area del triangolo è:",area);
	}
	else
	{
		printf("il triangolo non è equilatero");
	}

	return 0;

}
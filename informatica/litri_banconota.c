#include <stdio.h>

int main() 
{
    float litri, costolitro, importopagato, importototale, resto;

    
    printf("Inserisci il numero di litri di carburante: ");
    scanf("%f", &litri);

   
    printf("Inserisci il costo al litro della benzina: ");
    scanf("%f", &costolitro);

   
    importototale = litri * costolitro;
    printf("L'importo totale da pagare è: %.2f euro\n", importototale);

    
    printf("Inserisci l'importo della banconota: ");
    scanf("%f", &importopagato);

    
    resto = importopagato - importototale;
    printf("Il resto da ricevere è: %.2f euro\n", resto);

    return 0;
}

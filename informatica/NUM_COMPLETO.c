#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v1, v2;
    int scelta;
    float media;

    // Inizializza il generatore di numeri casuali
    srand(time(NULL));

    // Inserisci il primo voto
    printf("Inserisci il primo voto (compreso tra 2 e 10): ");
    scanf("%d", &v1);

    

   if(v1>=2 && v1<=10)
    {
        // Genera casualmente il secondo voto tra 4 e 8
    v2 = rand() % 5 + 4;

    // Stampa i voti
    printf("Il secondo voto generato casualmente è: %d\n", v2);
        
        
        
        printf("Scegli l'operazione da fare:\n");
        printf("1. Mostrare la media dei due voti\n");
        printf("2. Mostrare il voto maggiore tra i due\n");
        printf("3. Mostrare il voto minore tra i due\n");
        printf("4. Mostrare il numero di voti sufficienti (>=6)\n");
        printf("Inserisci la tua scelta (1-4): ");
        scanf("%d", &scelta);
        
        
        switch (scelta) {
            case 1:
                media=(v1+v2)/2.0;
                printf("La media dei due voti è: %.2f\n", media);
            break;
        
            case 2:
                if(v1>v2){
                    printf("il voto maggiore e quello inserito dall'utente %d", v1);
                }
                else
                {
                    printf("il voto maggiore è il secondo:%d", v2);
                }
            break;
            
            case 3:
                if(v1<v2){
                    printf("il voto minore e quello inserito dall'utente %d", v1);
                }
                else
                {
                    printf("il voto minore è il secondo:%d", v2);
                }
            break;
            
            case 4:
                if(v1>=6 && v2>=6){
                    printf("i due voti sono sufficienti");
                }
                else if(v1>=6)
                {
                    printf("il primo voto è sufficiente:");
                }
                else if (v2>=6){
                    printf("il secondo voto e sufficiente");
                }
            break;
        default:
            printf("la scelta non è valida");
    }
    }
    else
    {
            printf("la scelta non va bene");
    }
}
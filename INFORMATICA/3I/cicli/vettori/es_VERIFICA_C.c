/*DATO UN ARRAY CALCOLARE LA SOMMA DI TUTTI I VALORI 
POSITIVI E DI TUTTI I VALORI NEGATIVI;*/


#include <stdio.h>


void riempivettore(int vett[], int dim){
    for(int i =0; i<dim; i++){
        printf("inserisci l'elemento in %d posizione: ", i);
        scanf("%d", &vett[i]);
    }
}

int main(){
    
    int sommap=0;
    int somman=0;
    int N;

    printf("inserisci il valore di dim: ");
    scanf("%d", &N);
        
    int vett[N];

    riempivettore(vett, N);
    
    for (int i=0; i<N; i++){
        if(vett[i]<0){
            somman+=vett[i];
        }
        else if(vett[i]>0){
            sommap+=vett[i];
        }
    }
        
    printf("somma positivi: %d", sommap);
    printf("\n somma negativi: %d", somman);

}


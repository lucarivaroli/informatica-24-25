//scrittura --> array di struct

typedef struct Persona{
    char nome[30];
    char cognome[30];
    int eta;
}Persona;

#include <stdio.h>
int main(){
   FILE *file=fopen("dati.txt", "w");
   Persona persona;

   int n=100;
    if(file==NULL){
        printf("errore apertura file\n");
        return 1;
    }
    printf("inserire quanti caratteri vuoi inserire: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        
    }
    
    
    

    fprintf(file, "%s %s %d", "luca", "rossi", 12);
    fclose(file);
    return(0);

}
   
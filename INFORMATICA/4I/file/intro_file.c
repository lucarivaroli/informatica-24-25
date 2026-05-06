//scrivi sopra un file

#include <stdio.h>

int main(){
    FILE *file=fopen("dati.txt", "w");

    if(file==NULL){
        printf("errore apertura file\n");
        return 1;
    }

    fprintf(file, "ciao mondi \n");
    fprintf(file, "il numero: %d\n", 10);

    fclose(file);
    return 0;

}

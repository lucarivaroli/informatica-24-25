/*scrivere una funzione che preso in ingresso il nome 
del file contenente interi, lo modifichi in modo tale
da contenere gli stessinumeri ma ordinati in senso decrescente*/
#include <stdio.h>
#include <stdlib.h>

void Ordinafile(char nomefile[]){
    FILE *Fp;
    int vett[100],i=0, n=0, temp;

    Fp = fopen(nomefile, "r");
    if(Fp == NULL){
        printf("errore\n");
        return;
    }

    //lettura dei numeri dal file
    while(fscanf(Fp, "%d", &vett[n])== 1){
        printf("elemento %d: %d\n", n+1,vett[n]);
        n++;
    }
    fclose(Fp);
    //ordiniamo i valori bubble sort
    for(i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++ ){
            if(vett[i]< vett[j]){
                temp=vett[i];
                vett[i]=vett[j];
                vett[j]=temp;
            }
        }
    }
    //riapriamo il file per scriverci i numeri ordinati
    Fp = fopen(nomefile, "w");
    if(Fp == NULL){
        printf("errore\n");
        return;
    }
    for(i=0; i<n; i++){
        fprintf(Fp, "%d ", vett[i]);
    }
    fclose(Fp);
}

int main(){
    char nome[20];

    printf("inserisci il nome del file: ");
    scanf("%s", nome);

    Ordinafile(nome);

}
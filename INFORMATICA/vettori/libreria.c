#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libreria.h"   //prototipi delle funzioni

void richiediValori(int vettore[], int dim){
    int n=0, i=0;
    while(i<dim){
        printf("Inserisci il %do valore: ", i+1);
        scanf("%d", &n);
        if(n%2==0){
            vettore[i]=n;
            i++;
        }
    }
}

void stampaVettore(int vettore[], int dim, char sep){
    for(int i=0; i<dim; i++){
        printf("%d%c", vettore[i], sep);
    }
}

void caricaVettoreRandom(int vettore[], int dim, int min, int max){
    srand(time(NULL));
    for(int i=0; i<dim; i++){
        vettore[i]=rand()%(max-min+1)+min;
    }
}

int sommaVettore(int vettore[], int dim){
    int somma=0;
    for(int i=0; i<dim; i++){
        somma+=vettore[i];
    }
    return somma;
}

float mediaVettore(int vettore[], int dim){
    return (float)sommaVettore(vettore, dim)/dim;
}

int contaValore(int vettore[], int dim, int valore){
    int contatore=0;
    for(int i=0; i<dim; i++){
        if(vettore[i]==valore){
            contatore++;
        }
    }
    return contatore;
}

int ricercaSequenziale(int *vettore, int dim, int valore){
    for(int i = 0; i<dim; i++){
        if(vettore[i]==valore){
            return i;
        }
    }
    return -1;

}

int ricercaBinaria(int vettore[], int dim, int estInf, int estSup, int valore){
    int media = (estSup+estInf)/2;
    if(estInf > estSup)
        return -1;
    if(vettore[media]== valore)
        return media;
    if(vettore[media] > valore)
        return ricercaBinaria( vettore,dim, estInf, media-1, valore);
    else 
        return ricercaBinaria( vettore,dim, media+1, estSup, valore);
}

int trovaPosizione (int vett[], int dim, int num){
    int i=0;
    while(vett[i]<num && i<dim){
        i++;
    }
    return i;
}


void shiftDx (int vett[], int dim, int pos){
    for(int i=dim; i>pos; i--){
        vett[i]=vett[i-1];
    }
}


void riempiVettoreOrdinatoCasuale(int vett[], int dim, int minimo, int massimo) {
    srand(time(NULL));
    int num, pos;
    vett[0] = rand()%(massimo-minimo+1)+minimo;
    for(int i=1; i<dim; i++){
        num = rand()%(massimo-minimo+1)+minimo;
        pos = trovaPosizione(vett, i, num); 
        shiftDx(vett, i, pos);
        vett[pos] = num;
    }
}
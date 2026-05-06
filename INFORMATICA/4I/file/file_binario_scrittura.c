/*aprire e creare un file binario*/
#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("numeri.bin", "wb");
    int numeri[3]= {10, 20, 30};

    if(fp == NULL){
        printf("Errore nell'apertura del file");
        return 1;
    }
    fwrite(numeri, sizeof(int), 3, fp);
    fclose(fp);
}
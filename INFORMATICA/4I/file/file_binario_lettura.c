/*lettura e creare un file binario*/
#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("numeri.bin", "rb");
    int numeri[3], i;

    if(fp == NULL){
        printf("Errore nell'apertura del file");
        return 1;
    }
    fread(numeri, sizeof(int), 3, fp);
    for(i=0; i<3; i++){
        printf("%d ", numeri[i]);
    }  
    fclose(fp);
}
   
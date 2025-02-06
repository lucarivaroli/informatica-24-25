/*dato il raggio calcolare la circonferenza e l'area del cerchio*/
#include <stdio.h>
const float pigreco=3.14;

void circonf(float *_raggio, float *_diametro);

int main(){
    float raggio=0;
    float diametro=0;

    printf("inserisci il raggio: ");
    scanf("%d", &raggio);

    circonf(&raggio, &diametro);
}

void circonf(float *_raggio, float *_diametro){
    
}
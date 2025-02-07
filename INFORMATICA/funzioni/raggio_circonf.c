/*dato il raggio calcolare la circonferenza e l'area del cerchio*/
#include <stdio.h>
const float pigreco=3.14;

void circonf(float *_raggio, float *_diametro, float *_area );

int main(){
    float raggio=0;
    float diametro=0;
    float area=0;

    printf("inserisci il raggio: ");
    scanf("%d", &raggio);

    circonf(&raggio, &diametro, &area);
}

void circonf(float *_raggio, float *_diametro, float *_area){
    *_diametro=2*(*_raggio);
    *_area=pigreco*(*_raggio)*(*_raggio);
    

    
    
}
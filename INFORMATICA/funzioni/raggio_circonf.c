/*dato il raggio calcolare la circonferenza e l'area del cerchio*/
#include <stdio.h>
const float pigreco=3.14;

void circonf(float *_raggio, float *_diametro, float *_area );

int main(){
    float raggio=0;
    float diametro=0;
    float area=0;

    printf("inserisci il raggio: ");
    scanf("%f", &raggio);

    circonf(&raggio, &diametro, &area);

    printf("il diametro è: %.2f\n", diametro);
    printf("l'area è: %.2f\n", area);
    return 0;
}

void circonf(float *_raggio, float *_diametro, float *_area){
    *_diametro=2*(*_raggio)*pigreco;
    *_area=pigreco*(*_raggio)*(*_raggio);  
}
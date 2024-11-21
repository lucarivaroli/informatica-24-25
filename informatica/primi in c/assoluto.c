#include <stdio.h>

int main(){
    int n1=0;


    printf("inserisci il primo:\n ");
    scanf("%d", &n1);

    if(n1<0){
        
    n1=n1*(-1);
    printf("il valore è %d", n1);
    }else {
        printf("il valore e %d", n1);
    }
    
}
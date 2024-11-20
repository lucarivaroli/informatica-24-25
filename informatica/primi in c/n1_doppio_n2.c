#include <stdio.h>

int main(){
    int n1=0;
    int n2=0;


    printf("inserisci il primo:\n ");
    scanf("%d", &n1);

    printf("inserisci il secondo:\n ");
    scanf("%d", &n2);

    if(n1%n2==0){
        printf("il primo valore e doppio di n2");
    }else if(n2%n1==0){
        printf("n2 e doppio di n1");
    }else{
        printf("il numero nn e doppio dell'altro");
    }

}
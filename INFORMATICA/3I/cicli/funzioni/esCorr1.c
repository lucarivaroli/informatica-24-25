#include <stdio.h>

void richiedivalore(int *E); // chiede l'inserimento degli estremi

int main(){
int a=0;
int b=0;
int n,temp,cnt=0, i;


    do
    {
       richiedivalore(&a);
       richiedivalore(&b);
    } while (a==b);

    if (a>b){
        temp=a;
        a=b;
        b=temp;
    }
    printf("estremo a %d:", a);
    printf("estremo b %d:", b);
    richiedivalore

   
    
    
}
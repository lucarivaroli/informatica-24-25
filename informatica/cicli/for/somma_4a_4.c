
#include<stdio.h>
int main(){
    
    int n1=0, n2=0, n3=0, n4=0, n=0;
    int somma=0
    int cnt;
    
    

    /*do
    {
    printf("inserisci il primo numero");  
    scanf("%d", &n1);
    printf("inserisci il secondo numero");  
    scanf("%d", &n2);
    printf("inserisci il terzo numero");  
    scanf("%d", &n3);
    printf("inserisci il quarto numero");  
    scanf("%d", &n4);

    somma=n1+n2+n3+n4;
    
    printf("la somma e: %d", somma)

    } while (n1!=0||n2!=0||n3!=0||n4!=0);*/

    do
    {
        printf("inserisci il numero");  
        scanf("%d", &n);
        cnt++;
        somma=somma+n;

    } while (n==0);
    
    

    
}
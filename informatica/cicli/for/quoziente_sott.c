/*calcolare il quoziente fra due numeri 
applicando il metodo delle sottrazioni successive*/

#include <stdio.h>
int main(){
    //bisogna fermarci quando il nuovo quoziente diventa minore del numero
    int n1=0;
    int n2=0;
    int ris=0;
    int temp=0;
    int cnt=0;

    
   
    do
    {
        printf("inserisci il primo numero:\n");
        scanf("%d", &n1);
    } while (n1<=0);

    do
    {
        printf("inserisci il secondo numero:\n");
        scanf("%d", &n2);
    } while (n2<=0);
    
    if(n1<n2){
        
        temp=n1;
        n1=n2;
        n2=temp;
    }
    
    ris=n1;
    while (ris>=n2)
    {
        ris-=n2;
        cnt++;
  
        
    }
     printf("il risultato e: %d con resto di %d", cnt, ris);
}
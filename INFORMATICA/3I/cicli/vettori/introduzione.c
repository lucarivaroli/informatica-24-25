/* introduzione degli array
*/
#include<stdio.h>
#define MAX 10
int main(){
    int v[MAX];

    for (int i = 0; i < 10; i++)
    {
       v[i]=1;
       printf("%d", v[i]);
    }
    

    return 0;   

}
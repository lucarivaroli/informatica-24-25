#include <stdio.h>

void richiedivalore(int *e);
void somma(int *_s, int *_n);

int main(){
int somma=0, n, tent=10;

while (somma<100 && tent!=0)
{
    richiedivalore(&n);
    somma(&somma,&n);
    
}
}
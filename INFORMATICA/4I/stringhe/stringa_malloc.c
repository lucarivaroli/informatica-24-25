/*stringhe con malloc*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *buffer; //puntatore alla stringa buffer
    int len;

    printf("inserisci la lunghezza della stringa: ");
    scanf("%d", &len);

    //alloco lo spazio di memoria della stringa
    buffer=(char*)malloc((len+1)*sizeof(char));
    if(buffer==NULL) return NULL;

    printf("inserisci una stringa: ");
    fgets(buffer, (len+1), stdin);
    printf("haio inserito: %s", buffer);

    free(buffer);



   
}
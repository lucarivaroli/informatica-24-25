/*
data una stringa contare il numero delle vocali
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef char* string;
void compatta(string buffer, int len){
    if(len>0 && buffer[len-1]=='\n'){
        buffer[len-1]='\0';
        len--;
    }

}

int conteggio(string frase){
    int cnt=0;
    for(int i=0; i<frase[i]!='\0'; i++){
        char c= tolower(frase[i]);
        if(c=='a' || c=='e' ||c=='i'|| c=='o'|| c=='u'){
        cnt++;
        }
        
    }
    return cnt;
}

int main(){
    char buffer [200];
    string frase;

    printf("inserisci una stringa: ");
    fgets(buffer, sizeof(buffer), stdin);

    int len=strlen(buffer);
    compatta(buffer,len);
    frase=(string)malloc((len+1)*sizeof(char));

    if(frase==NULL){
        printf("errore");
        return 1;
    }
    
    strcpy(frase, buffer);

    printf("ilnumero delle vocali sono: %d ", conteggio(frase));

    free(frase);
    return 0;

}
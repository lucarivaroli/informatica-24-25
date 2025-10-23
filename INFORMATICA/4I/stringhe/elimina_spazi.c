//eliminare gli spazi da una stringa 
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


void spazio(string frase){
    int j=0;

    for(int i =0; i<frase[i]!='\0'; i++){
        
        if (frase[i] != ' ') {
            for (int j = i;frase [j]!='\0'; j++)
            {
                frase[j]=frase[j+1];
            }
        }
    }

void stampastringa(string frase){
    printf("%s", frase);
}
            
            
        
    
//non giusto


    


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
    spazio(frase);
    stampastringa(frase);


    free(frase);
    return 0;

}

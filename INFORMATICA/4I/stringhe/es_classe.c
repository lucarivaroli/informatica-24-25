/*utilizzare la libreria string.h
per le seguenti operazioni:
1) calcolare la lunghezza stringa
2) controllo stringhe uguali
3) copiare una stringa
4) cercare un carattere e comunicare la frequenza
5) concatenare 2 stringhe
6) ricerca di una stringa nell'altra*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef char* string;

int main(){

    char s1[]="ciao a tutti";
    char s2[]="domani mattina";
    char s3[35]="";
    char c;
    int count=0;
    char sotto[30];
    int i=0;
    
    printf("la lunghezza della stringa 1 e: %lu", strlen(s1));
    printf("\nla lunghezza della stringa 2 e: %lu", strlen(s2));
    printf("\n");
   
    if(strcmp(s1,s2)==0){
        printf("le stringhe sono uguali");
    }else{
        printf("le stringhe sono diverse");
    }

    strcpy(s3,s1);
    printf("\nla stringa copiata in s3 e: %s", s3);
    

    printf("\ninserisci il carattere da cercare in s1: ");
    scanf("%c", &c);
    for(int i=0; i<strlen(s1); i++){
        if(s1[i]==c){
            count++;
        }
    }
    printf("il carattere %c compare %d volte in s1", c, count);
    strcat(s1, s2);
    printf("\nla stringa concatenata e: %s", s1);

    printf("\ninserisci la stringa da cercare dentro s1: ");
    scanf("%s", sotto);
    
    if(strstr(s1, sotto)!=NULL){
        printf("la stringa %s e presente in s1", sotto);
    }else{
        printf("la stringa %s non e presente in s1", sotto);
    }
    
    

    














}



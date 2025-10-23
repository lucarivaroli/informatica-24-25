//verificare se una parola/frase e palindroma es: otto
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef char* string;

int lunghezza(string s){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }return i-1;
}

int palindroma(string s, int dim){
    int flag=0, i, j;

    for( i=0, j=dim-1; i<dim/2; i++, j--){
        if(s[i]!=s[j]){
            flag=1;
        }
    }return flag;

}

int main(){
    int dim=0, Palindroma=0;
    

    string s= (string)malloc(50*sizeof(char));
    if(s==NULL) return 1;

    printf("inserisci una stringa: ");
    fgets(s, 50, stdin);
    printf("%s", s);


    dim=lunghezza(s);
    printf("%d", dim);

    Palindroma=palindroma(s, dim);
    if(Palindroma==1){
        printf("la frase non e palindroma");
    
    }else{
        printf("la frase e palindroma");
    }
}


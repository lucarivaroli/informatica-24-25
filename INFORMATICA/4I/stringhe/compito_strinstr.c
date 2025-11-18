#include <stdio.h>
#include <string.h>

typedef char* Stringa;

int sottostringa(Stringa s1, Stringa s2){
    int dim1 = strlen(s1); 
    int dim2 = strlen(s2); 
    
    
    for(int i = 0; i <= dim1 - dim2; i++){  // corretto: <= dim1-dim2
        if(s1[i] == s2[0]){
            int j;
            for(j = 1; j < dim2; j++){
                if(s1[i+j] != s2[j]){
                    break;
                }
            }
            if(j == dim2){  // tutti i caratteri coincidono
                return i;
            }
        }
    }
    return -1; 
}

int main(){
    char s1[100];
    char s2[100];

    printf("inserisci una stringa: ");
    fgets(s1, 100, stdin);
    if (s1[strlen(s1)-1] == '\n') s1[strlen(s1)-1] = '\0';

    printf("inserisci la sottostringa: ");
    fgets(s2, 100, stdin);
    if (s2[strlen(s2)-1] == '\n') s2[strlen(s2)-1] = '\0';

    int posizione = sottostringa(s1, s2);

    if(posizione != -1){
        printf("sottostringa trovata alla posizione %d\n", posizione);
    } else {
        printf("sottostringa non trovata\n");
    }

    return 0;
}
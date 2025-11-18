/*date due stringhe scrivere la stringa in alternata
es ciao
casa
cciaasoa
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[100], str2[100], ris[200];
    int len1, len2, lenr, i, j, k;

    printf("inserisci la prima stringa: ");
    fgets(str1, sizeof(str1), stdin);
    printf("inserisci la seconda stringa: ");
    fgets(str2, sizeof(str2), stdin);

    len1 = strlen(str1);
    len2 = strlen(str2);
    if(str1[len1-1]=='\n') len1--;
    if(str2[len2-1]=='\n') len2--;

    i = 0; j = 0; k = 0;
    while(i < len1 && j < len2){
        ris[k++] = str1[i++];
        ris[k++] = str2[j++];
    }
    while(i < len1){
        ris[k++] = str1[i++];
    }
    while(j < len2){
        ris[k++] = str2[j++];
    }
    ris[k] = '\0';

    printf("stringa alternata: %s\n", ris);

    return 0;
}
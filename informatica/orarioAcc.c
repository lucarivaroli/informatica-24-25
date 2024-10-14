#include <stdio.h>

int main() {

    int o1, m1, s1;
    int o2, m2, s2;

 
    printf("Inserisci la prima ora (ss mm oo): ");
    scanf("%d %d %d", &o1, &m1, &s1);

    printf("Inserisci la seconda ora (ss mm oo): ");
    scanf("%d %d %d", &o2, &m2, &s2);

 
    if(s1<60 && m1<60 && o1<24 && s2<60 && m2<60 && o2<24)
    {
        printf("l'orario e valido: ");
     if (o1 > o2) {
        printf("La ora che viene prima è: %02d %02d %02d\n", o1, m1, s1);
    } else if (o1 < o2) {
        printf("La ora che viene prima è: %02d %02d %02d\n", o2, m2, s2);
    } else {
        if (m1 > m2) {
            printf("La ora che viene prima è: %02d %02d %02d\n", o1, m1, s1);
        } else if (m1 < m2) {
            printf("La ora che viene prima è: %02d %02d %02d\n", o2, m2, s2);
        } else {
            if (s1 > s2) {
                printf("La ora che viene prima è: %02d %02d %02d\n", o1, m1, s1);
            } else if (s1 < s2) {
                printf("La ora più recente è: %02d %02d %02d\n", o2, m2, s2);
            } else {
                printf("Le due ore sono uguali.\n");
            }
        }
    }

    }else
    {
        printf("l'orario non e valido: ");
    }
    
    
   
    return 0;
}
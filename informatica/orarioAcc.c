#include <stdio.h>

int main() {

    int o1, m1, s1;
    int o2, m2, s2;

 
    printf("Inserisci la prima data (gg mm aaaa): ");
    scanf("%d %d %d", &o1, &m1, &s1);

    printf("Inserisci la seconda data (gg mm aaaa): ");
    scanf("%d %d %d", &o2, &m2, &s2);

 
    if (a1 > a2) {
        printf("La data più recente è: %02d/%02d/%04d\n", g1, m1, a1);
    } else if (a1 < a2) {
        printf("La data più recente è: %02d/%02d/%04d\n", g2, m2, a2);
    } else {
        if (m1 > m2) {
            printf("La data più recente è: %02d/%02d/%04d\n", g1, m1, a1);
        } else if (m1 < m2) {
            printf("La data più recente è: %02d/%02d/%04d\n", g2, m2, a2);
        } else {
            if (g1 > g2) {
                printf("La data più recente è: %02d/%02d/%04d\n", g1, m1, a1);
            } else if (g1 < g2) {
                printf("La data più recente è: %02d/%02d/%04d\n", g2, m2, a2);
            } else {
                printf("Le due date sono uguali.\n");
            }
        }
    }

    return 0;
}
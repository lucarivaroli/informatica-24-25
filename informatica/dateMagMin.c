#include <stdio.h>

int main() {
    int g1, m1, a1;
    int g2, m2, a2;

    // Input delle due date
    printf("Inserisci la prima data (gg mm aaaa): ");
    scanf("%d %d %d", &g1, &m1, &a1);

    printf("Inserisci la seconda data (gg mm aaaa): ");
    scanf("%d %d %d", &g2, &m2, &a2);

    // Confronto delle date
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
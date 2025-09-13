//Data una matrice di valori scambiare gli elementi della diagonale principale con la diagonale secondaria.

#include <stdio.h>
int main(){

    int m[10][10], i, j, n, temp;
    printf("Inserisci la dimensione della matrice quadrata: ");
    scanf("%d", &n);
    
    printf("Inserisci gli elementi della matrice: ");
    
    //riemoire matrici con valri dati dall'utente
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    // Scambio delle diagonali
    for(i=0; i<n; i++){
        temp = m[i][i];
        m[i][i] = m[i][n-i-1];
        m[i][n-i-1] = temp;
    }
    printf("Matrice dopo lo scambio delle diagonali:");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;                                                           

}

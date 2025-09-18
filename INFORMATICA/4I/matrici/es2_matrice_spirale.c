//caricare la matrice quadrata in modalita spirale
#include <stdio.h>
#define N 4

void riempimat(int _mat[][N]){
    int num=1, i;
    int top=0, botton=N-1, left=0, right=N-1;

    while(num<=N*N){
        //sinistra verso destra
        for(i=left; i<=right;i++)
            _mat[top][i]=num++;
        top++;
        //alto verso il basso
        for(i=top; i<=botton; i++)
            _mat[i][right]=num++;
        right--;
        //destra verso sinistra
        for(i=right; i>=left; i--)
            _mat[botton][i]=num++;
        botton--;
        //basso verso l'alto
        for(i=botton;i>=top; i--)
            _mat[i][left]=num++;
        left++;
    }


}

void stampamat(int _mat[][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d\t ", _mat[i][j]);
        }
        printf("\n");
    }

}

int main() {
    
    int mat[N][N];
    riempimat(mat);
    printf("la matrice a spirale e:\n ");
    stampamat(mat);

    
}
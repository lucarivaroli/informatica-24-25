//caricare la matrice quadrata in modalita spirale
#include <stdio.h>
#define N 4

void riempimat(int mat[][N]){
    int num=0, i;
    int top=0, botton=N-1, left=0, right=N-1;

    while(num<=N*N){
        //sinistra verso destra
        for(i=left; i<=right;i++)
            mat[top][i]=num+1;
        top++;
        //alto verso il basso
        for(i=top; i<=botton; i++)
            mat[i][right]=num+1;
        right--;
        //destra verso sinistra
        for(i=right; i<=left; i--)
            mat[botton][i]=num+1;
        botton--;
        //basso verso l'alto
        for(i=botton;i<=top; i--)
            mat[i][left]=num+1;
        left++;
    }


}

void stampamat(int mat[][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d\t ", mat[i][j]);
        }
        printf("\n");
    }

}

int main() {
    
    int mat[N][N];
    riempimat(mat);
    printf("la matrice a spirale e: ");
    stampamat(mat);

    
}
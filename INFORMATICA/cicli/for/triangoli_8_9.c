#include<stdio.h>

int main(){
    
    int spazio;

    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= i; j++) {
            if(i==8 || j==i||i==1||j==1){
            printf("* ");
            }else{
              printf("  ");  
            }
        }
        printf("\n");
    }


    for (int i =1;i<=9;i++ ){
        for(int j=1;j<=9; j++){
            
        }

            printf("\n");
    }
}

#include<stdio.h>
#define N 5

void zeroMatrix(int [N][N]);
void mtrxPrint(int [N][N]);

int main(){

    int i,j;
    int pascal[N][N];
    zeroMatrix(pascal);

    for(i=0;i<N;i++){
        for (j=1;j<i;j++){
            pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
        }
    }

    mtrxPrint(pascal);
}

void zeroMatrix(int matrix [N][N]){
    int i,j;
    for (i=0;i<N;i++){
        for (j=0;j<N;j++){
            if(i==j||j==0)matrix[i][j]=1;
            else{matrix[i][j]=0;}
        }
    }
}

void mtrxPrint(int matrix[N][N]){
    int i,j;
    for (i=0;i<N;i++){
        for (j=0;j<N;j++){
            if (matrix[i][j]!=0){printf("%d  ",matrix[i][j]);}
            else {printf(" ");}
        }
        printf("\n");
    }
}

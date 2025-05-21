#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define tmnh 5
void mtrxRandom(int [tmnh][tmnh]);
void mtrxPrint(int [tmnh][tmnh]);
void mtrxTrans(int [tmnh][tmnh],int [tmnh][tmnh]);

int main(){

    int matriz[tmnh][tmnh],matrizT[tmnh][tmnh];
    mtrxRandom(matriz);
    mtrxPrint(matriz);
    printf("\n\n");
    mtrxTrans(matriz,matrizT);
    mtrxPrint(matrizT);

}

void mtrxRandom(int matrix[tmnh][tmnh]){
    srand(time(NULL));
    int i,j;

    for (i=0;i<tmnh;i++){
        for (j=0;j<tmnh;j++){
            matrix[i][j]=rand()%10;
        }
    }
}

void mtrxPrint(int matrix[tmnh][tmnh]){
    int i,j;
    for (i=0;i<tmnh;i++){
        for (j=0;j<tmnh;j++){
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }
}

void mtrxTrans(int input[tmnh][tmnh],int output[tmnh][tmnh]){
    int i,j,save;
    for (i=0;i<tmnh;i++){
        for (j=0;j<tmnh;j++){
            output[i][j]= input[j][i];
        }
    }

}

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define tmnh 5
void preencheBingo(int[tmnh][tmnh]);
int verificaRepitido(int[tmnh][tmnh],int);
void mtrxPrint(int[tmnh][tmnh]);


int main(){

    srand(time(NULL));
    int cartela[tmnh][tmnh];
    preencheBingo(cartela);
    mtrxPrint(cartela);
}

void preencheBingo(int matriz[tmnh][tmnh]){

    int i,j,valor,flag;
    for (i=0;i<tmnh;i++){
        for (j=0;j<tmnh;j++){

           valor=rand()%100;
           flag = verificaRepitido(matriz,valor);
           if (flag==1){matriz[i][j]=valor;}
           else {j--;}
        }
    }
}

int verificaRepitido (int matriz[tmnh][tmnh],int valor){
    int i,j;
    for (i=0;i<tmnh;i++){
        for (j=0;j<tmnh;j++){
            if(matriz[i][j]==valor){return 0;}
        }
    }
    return 1;
}

void mtrxPrint(int matrix[tmnh][tmnh]){
    int i,j;
    for (i=0;i<tmnh;i++){
        for (j=0;j<tmnh;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}

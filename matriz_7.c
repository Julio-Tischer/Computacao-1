#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define tmnh 10
void mtrx2Random(int [tmnh][tmnh],int[tmnh][tmnh]);
void mtrxPrint(int [tmnh][tmnh]);
void mtrxSoma(int [tmnh][tmnh],int [tmnh][tmnh],int [tmnh][tmnh]);
void mtrxSub(int [tmnh][tmnh],int [tmnh][tmnh],int [tmnh][tmnh]);
void menuConst(int [tmnh][tmnh],int [tmnh][tmnh]);

int main()
{
    int flagMatriz=0, escolha, quit=0;
    int matriz1[tmnh][tmnh],matriz2[tmnh][tmnh],matrizMem[tmnh][tmnh];

    printf("Seja bem-vindo a central de matrizes. Selecione uma opção:");
    while(quit==0){

        printf("\n(0) Criar duas matrizes 10x10;\n(1) Imprimir matrizes original;\n(2) Somar matrizes;\n(3) Subtrair matriz 1 da 2;\n(4) Multiplicar matriz por const;\n(5) Sair do programa.\n\n");
        scanf("%d",&escolha);

        if (escolha==0) {
            mtrx2Random(matriz1,matriz2);
            flagMatriz=1;
        }

        else if (escolha==1 && flagMatriz==1) {
            printf("\n--imprimindo matrizes--\n\n");
            mtrxPrint(matriz1);
            mtrxPrint(matriz2);
            printf("--Matrizes impressas--\n");
        }

        else if (escolha==2 && flagMatriz==1) {
            printf("\n--somando matrizes--\n\n");
            mtrxSoma(matriz1,matriz2,matrizMem);
            mtrxPrint(matrizMem);
            printf("--Matrizes somadas--\n");
        }

        else if (escolha==3 && flagMatriz==1) {
            printf("\n--Subtraindo matrizes--\n\n");
            mtrxSub(matriz1,matriz2,matrizMem);
            mtrxPrint(matrizMem);
            printf("--Matrizes subtraidas--\n");
        }

        else if (escolha==4 && flagMatriz==1) {
            menuConst(matriz1,matrizMem);
            printf("\n--Imprimindo Resultado--\n");
            mtrxPrint(matrizMem);
            printf("--Resultado impresso--\n");
        }

        else if (escolha==5) {return 0;}

        else
        {
            printf("\n--ESCOLHA UMA OPÇAO VALIDA OU CRIE UMA MATRIZ!--\n");
        }
    }
}

void mtrx2Random(int matrix1[tmnh][tmnh],int matrix2[tmnh][tmnh])
{
    srand(time(NULL));
    int i,j;

    for (i=0; i<tmnh; i++){
        for (j=0; j<tmnh; j++){

            matrix1[i][j]=rand()%100+1;
        }
    }
    for (i=0; i<tmnh; i++){
        for (j=0; j<tmnh; j++){

            matrix2[i][j]=rand()%100+1;
        }
    }
    printf("\n--Matrizes Criadas--\n");
}

void mtrxPrint(int matrix[tmnh][tmnh]){
    int i,j;
    for (i=0;i<tmnh;i++){
        for (j=0;j<tmnh;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void mtrxSoma(int matrix1[tmnh][tmnh],int matrix2[tmnh][tmnh],int resultado[tmnh][tmnh]){

    int i,j;
    for (i=0;i<tmnh;i++){
        for (j=0;j<tmnh;j++){
            resultado[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
}

void mtrxSub(int matrix1[tmnh][tmnh],int matrix2[tmnh][tmnh],int resultado[tmnh][tmnh]){

    int i,j;
    for (i=0;i<tmnh;i++){
        for (j=0;j<tmnh;j++){
            resultado[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }
}

void menuConst(int matrix1[tmnh][tmnh],int resultado[tmnh][tmnh]){

    int constante,i,j;
    printf("\n --ESOLHA UMA CONSTANTE A MULTIPLICAR A MATRIZ 1:\t");
    scanf("%d",&constante);
    for (i=0;i<tmnh;i++){
        for (j=0;j<tmnh;j++){
            resultado[i][j]=matrix1[i][j]*constante;
        }
    }

}

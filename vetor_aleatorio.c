#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define tmnh 5
int vrvVet(int [tmnh], int);

int main(){
    srand(time(NULL));
    int vetor[tmnh];
    int i,valor,flag=1;
    printf("CALCULANDO VALORES PARA 5 VETORES:\n\n\nVALORES CALCULADOS:\t");

    for (i=0;i<=tmnh-2;i++){
        vetor[i]=rand()%100+1;
        printf("%d\t",vetor[i]);
    }

    while (flag==1){
        printf("\n\n Escreva um valor não nulo para adicionar no vetor:\t");
        scanf("%d",&valor);
        flag = vrvVet(vetor,valor);
    }
    vetor[tmnh-1]=valor;

    printf("\nVALOR ACEITO! O NOVO VETOR É:\t");

    for (i=0;i<=tmnh-1;i++){
        printf("%d\t",vetor[i]);
    }
    printf("\n");
    return 0;

}

int vrvVet(int VTR[tmnh], int valor_chute){
    int i;
    for (i=0;i<=tmnh;i++){
        if (VTR[i]==valor_chute){printf("Esse valor ja esta contido!\n");return 1;}
    }

    return 0;
}

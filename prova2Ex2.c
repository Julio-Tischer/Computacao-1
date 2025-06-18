#include<stdio.h>
#define ENTRADAS 16

void calculaEstatistica(float[],float*);

int main (){

    FILE* arquivo;
    int i;
    float numero,maiorValor;
    float vetor[ENTRADAS];
    arquivo=fopen("valores.txt","w");
    for (i=0;i<ENTRADAS-1;i++){
        printf("Escreva o %d° numero:\t",i+1);
        scanf("%f",&numero);
        fprintf(arquivo,"%.2f\n",numero);
    }
    fclose(arquivo);
    i=0; //Vou reutilizar o i

    arquivo = fopen("valores.txt","r");
    while (fscanf(arquivo,"%f",&numero)==1){
        vetor[i]=numero;
        printf("Valor %d: %.2f\n",i+1,vetor[i]);
        i++;

    }
    calculaEstatistica(vetor,&maiorValor);
    printf("O maior valor do vetor é %.2f",maiorValor);
}

void calculaEstatistica (float vetor[ENTRADAS],float* saida){

    int i;
    float atual,maior;
    for (i=0;i<ENTRADAS-1;i++){
        atual = vetor[i];
        if (atual>maior){maior=atual;}
    }
    *saida=maior;
}

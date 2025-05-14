#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define TMNH 10

int main(){

    srand(time(NULL));
    int i=0,valor=-1;
    int vetor[TMNH];

    for (i=0;i<=TMNH-2;i++){
        vetor[i]=rand()%10+1;
        printf("%d\n",vetor[i]);
    }



    while (vetor[TMNH-1]!=valor){
        printf("\nEscreva um valor:\t");
        scanf("%d",&valor);

        if (comparaV(valor,vetor)){
            printf("\nPARABENS, O ULTIMO VALOR DE AGORA É %d",valor);
        }
        else{printf("\nESSE VALOR JA ESTA CONTIDO\n");}
    }
}

int comparaV(int val,int vet[TMNH]){
    int i=0;
    for (i=0;i<=TMNH-2;i++){
        if (val==vet[i]){return 0;}
    }
    return 1;

}

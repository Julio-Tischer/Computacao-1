#include<stdio.h>
int main(){
    float numero = 1;

    while (numero >= 0){
        printf("Digite um numero, para encerrar programa, digite um negativo:\t");
        if (scanf("%f",&numero)==0){printf("\n\nDIGITE UM NUMERO, USE PONTOS NÃO VIRGULAS\n\n");return 1;}

        printf("\nSeu numero é %.2f\n\n",numero);
    }
    printf("Adeus\n");
    return 0;
}

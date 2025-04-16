#include<stdio.h>
#include<locale.h>
int main(){
    int senha;
    while (senha != 2002){

        printf("Digite a senha\t");
        int erro = scanf("%d",&senha);
        if (erro==0){
            printf("\nA SENHA É UM NUMERO, FINALIZANDO PROGRAMA");
            return 1;
        }

        if (senha!=2002){
            printf("\n\nACESSO NEGADO!\n\n");
        }
    }
    printf("\n\nACESSO CONFIRMADO!\n\n");
    return 0;
}

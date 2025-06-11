#include<stdio.h>
#include<string.h>

int main(){

    int rodando=1;
    char nome1[100];
    char nome2[100];
    char nome3[100];
    char nomeTeste[100];
    printf("Escreva os 3 nomes chave:\t");
    scanf("%s %s %s",nome1,nome2,nome3);
    printf("\nOs nome chave são:\n\n1.%s \n2.%s \n3.%s",nome1,nome2,nome3);

    while (rodando==1){
        printf("\nEscreva um nome:\t");
        scanf("%s",nomeTeste);

        if (strcmp(nome1,nomeTeste)==0||strcmp(nome2,nomeTeste)==0||strcmp(nome3,nomeTeste)==0){
            printf("\n\n--Nome aceito. Encerrando programa--\n\n");
            rodando=0;
        }
        else{
            printf("\n\n--Nome errado!--");
        }
    }
}

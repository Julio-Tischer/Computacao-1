#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"");

    float soma = 0,positivos = 0,numero = 0;

    while (numero != -1000){
        printf("Digite um número, para encerrar digite -1000\t");
        int erro = scanf("%f",&numero);
        if(erro==0){return 1;}
        //detecta se o scanf recebeu um caracter, se sim retorna 1

        if (numero>0){
            positivos++;
            soma = soma+numero;
        }
        //detecta se o numero é positivo, se for incrementa o contador de positvos e calcula soma
        printf("\n");
    }
    if (positivos>0){
        printf("\nForam escritos %.0f positivos, e a média deles é de %.2f\n",positivos,soma/positivos);
    }
    return 0;
}

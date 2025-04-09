#include<stdio.h>
#include<locale.h>
int main (){
    setlocale(LC_ALL,"");

    int Magua, Custo;
    printf("Seja bem-vindo a interface de custos  SBC.\nInsira seu consumo de agua em M³ (escreva apenas UM numero INTEIRO)\t");
    int erro = scanf("%d",&Magua);

    if (erro==0 || Magua<0){
        printf("\n\nERRO, VERIFIQUE SE A ENTRADA É UM NUMERO INTEIRO POSITIVO\n");
        return 1;
    }

    if (Magua<=10){
        printf("\n\nSua conta é 7 R$.");
    }
    else if (Magua>=11 && Magua<=30){
        printf("\n\nSua conta é %d R$.",7+(Magua-10)*1);
    }
    else if (Magua>=31 && Magua<=100){
        printf("\n\nSua conta é %d R$",27+(Magua-30)*2);
    }
    else{
        printf("\n\nSua conta é de %d R$",167+(Magua-100)*5);
    }
    return 0;
}

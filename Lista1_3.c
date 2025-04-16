#include<stdio.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL,"");
    int casos,i = 1;
    float media1,media2,media3;

    printf("Quantos casos de média vai calcular? \t");
    int erro=scanf("%d",&casos);

    if (erro == 0){
        printf("ERRO! DIGITE UM NUMERO!"); return 1;
    } //isso é caso digite um não numero

    printf("\n\n CASO NECESSARIO, USAR VIRGULA, NUNCA PONTO!");

    while (i<=casos){
        printf("\n\nDigite os numeros do %d° de %d casos a serem calculados:\t",i,casos);
        erro = scanf("%f %f %f",&media1,&media2,&media3);
        if (erro==0){printf("ERRO, DIGITE UM NUMERO");return 1;}
        //esse linha é um crime, mas não quero aumentar o codigo

        printf("\n\n A média é %.2f",((media1*2)+(media2*3)+(media3*5))/10);

        i++;

    }
    printf("\n\nTodas as %d médias foram calculadas com sucesso!\n",casos);

    return 0;

}

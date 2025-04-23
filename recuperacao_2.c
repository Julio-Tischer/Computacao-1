#include<stdio.h>
#include<math.h>

int main(){
    int base, intervaloI, intervaloF, i, soma=0;

    printf("Digite um numero base inteiro para calcular a soma em dado intervalo\t");
    scanf("%d", &base);
    printf("\nDigite o numero inicial e final do intervalo, em float, respectivamente\t");
    scanf("%d %d", &intervaloI, &intervaloF);
    i = intervaloI;

    while(i<=intervaloF){
        if (i%base==0){soma=soma+i;}
    i++;
    }
    printf("\n\n A soma dos multiplos de %d no intervalo de %d a %d resulta em %d\n",base,intervaloI,intervaloF,soma);
    return 0;

}

#include<stdio.h>
#include<locale.h>

int main(){
    int n,erro,i;
    printf("Escolha um numero inteiro\t");
    erro = scanf("%d",&n);
    i=1;

    if (erro == 0){
        printf("\n\nESCOLHA UM NUMERO INTEIRO");
        return 1;
    }

    while (i<=100){
        if (i%n==2){
            printf("%d\n",i);
        }
        i++;
    }
    printf("esses numeros são todos os numeros divisiveis por %d entre 1 a 100",n);
    return 0;
}

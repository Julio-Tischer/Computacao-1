#include<stdio.h>
#include<math.h>
int main(){
    float altura, largura, tinta;

    printf("Qual a largura da parede em m?\t");
    scanf("%f",&largura);
    printf("\nQual a altura da parede em m?\t");
    scanf("%f",&altura);
    tinta = ceil(altura*largura/2);

    printf("\nA parede tem uma area de %.1f, e vai precisar de %.0f litros de tinta\n",altura*largura,tinta);
    return 0;
}


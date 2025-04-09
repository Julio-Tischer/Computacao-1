#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"");

    float Palc, Pgas, RendA, RendG, KMalc, KMgas;
    printf("Digite os preços do alcool e da gasolina respectivamente \t");
    scanf("%f %f",&Palc,&Pgas);
    printf("\n\nDigite quantos kilometros por UM litro o carro faz com alcool e gasolina respectivamente\t");
    scanf("%f %f",&RendA,&RendG);
    //define as variaveis e pede e salva os valores do alcool, gasiolina, km/l do Alcool e GAS.

    KMalc = RendA/Palc;
    KMgas = RendG/Pgas;
    //Calcula o KM/R$ de cada combustivel

    if (KMalc==KMgas){
        printf("\nA economia é a mesma, abastecer com GASOLINA, KM por REAL é de %.2f\n",KMgas);
    }
    else if (KMalc>KMgas){
        printf("\nAlcool está mais barato, abastecer com ALCOOL.\n\nKM por REAL do alcool é %.2f. \nKM por REAL da GASOLINA é %.2f\n",KMalc,KMgas);
    }
    else{
        printf("\nGasolina está mais barato, abastecer com GASOLINA.\nKM por REAL do alcool é %.2f. \nKM por REAL da GASOLINA é %.2f\n",KMalc,KMgas);
    }

return 0;
}

#include<stdio.h>
#include<locale.h>
int main(){

    float nota1, nota2, nota3, media;
    printf("digite suas notas com espaço entre cada uma:\t");
    scanf("%f %f %f",&nota1,&nota2,&nota3);

    media = (nota1+nota2+nota3)/3;

    if (media>8){
        printf("\n Parabens! Aprovado com distinção e media %f \n",media);
    }

    else if (media>=6){
        printf("\n Parabens, você esta aprovado com media %f \n",media);
    }

    else if (media>=4){
        printf("\n Você esta em exame! Sua media é %f \n",media);
    }

    else{
        printf("\n Esta de exame final! Sua media é %f \n",media);
    }

    printf("\n Até a proxima... \n");
    return 0;
}

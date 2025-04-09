#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"");

    float Nota1, Nota2, Nota3, Media, Frequencia;
    printf("Seja bem-vindo, para saber seu status de aprovação, por favor digite suas notas (com espaço entre cada uma)\t");
    scanf("%f %f %f",&Nota1,&Nota2,&Nota3);
    Media = (Nota1+Nota2+Nota3)/3.0;
    //Primeiro definimos nossas variaveis todas como float, então pegamos as notas e calculamos a media

    printf("\n\n Por favor insira a sua frequencia \t");
    scanf("%f",&Frequencia);
    //Isto pega a frequencia

    if (Frequencia>= 75 && Media>8.0){

        printf("\n\n Parabens! Você foi aprovado com DISTINÇÃO. Sua media é %.1f e sua frequencia foi %.1f%%",Media,Frequencia);
    }
    else if (Media>=6 && Frequencia >= 75){

        printf("\n\n Parabens, você esta aprovado. Sua media é %.1f e sua frequencia foi %.1f%%",Media,Frequencia);
    }
    else if ((Media>=4 && Media<=6 && Frequencia>=75 && Frequencia>50)||(Media>=6 && Frequencia<75 && Frequencia>50)||(Media>=4 && Frequencia<75 && Frequencia>50)){

        printf("\n\n Melhor se esforçar, você esta em exame com media %.1f e frequencia %.1f%%",Media,Frequencia);
    }
    else if (Media<4 || Frequencia<=50){

        printf("\n\n Você esta reprovado, pois sua nota e/ou frequencia foram muito baixas. Sua media foi de %.1f e frequencia foi de %.1f%%",Media,Frequencia);
    }
    else{

        printf("\n\n Algo de errado! Tudo foi digitado corretamente?");
        return 400;
    }

    printf("\n\n Isto é tudo.\n\n");
    return 0;
}

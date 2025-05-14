#include<stdio.h>

void converterSegs(int segundos, int *eSeg, int *eMin, int *eHora){

    *eHora=segundos/3600;
    *eMin=(segundos%3600)/60;
    *eSeg=((segundos%3600)%60);

}


int main(){

    int segundos,min,hora;
    printf("Digite a quantidade de segundos para converter:\t");
    scanf("%d",&segundos);
    converterSegs(segundos,&segundos,&min,&hora);

    printf("\nIsto equivale a %d Horas, %d minutos, %d segundos ",hora,min,segundos);

}

#include <stdio.h>
#include <locale.h>
int main(){
    int hora, min, seg;
    float aux = 5.5;
    printf("digite hora minuto e seg\t");
    scanf("%d %d %d", &hora, &min, &seg);

    if(hora>1 && min>15){
        printf("Temos varios segundos: %d\n",hora*3600+min*60+seg);
    }
    else{
        printf("temos %f minutos\n",hora*60.0+min+seg/60);
    }

    printf("Horario: %02d:%02d:%02d\n", hora, min, seg);
    printf("float com duas casas: %.2f \n \n Adeus",aux);
    return 0;
}

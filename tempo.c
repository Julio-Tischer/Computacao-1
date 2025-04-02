#include <stdio.h>
#include <locale.h>
int main(){
    int hora, min, seg;
    printf("digite hora minuto e seg\t");
    scanf("%d %d %d", &hora, &min, &seg);

    if(hora>1 && min>15){
        printf("Temos essa quantidade de segundos disponiveis: %d\n\n",hora*3600+min*60+seg);
    }
    else{
        printf("temos %.1f minutos\n\n",hora*60.0+min+seg/60);
    }

    printf("Horario: %02d:%02d:%02d\n\n", hora, min, seg);
    if (hora>24 || min>60 || seg>60){
        int segundostotais = hora*3600+min*60+seg;


        printf("esse horario não é muito real... Mas temos %d segundos, isto são %.2f dias",segundostotais, segundostotais/86400.0);
    }

    return 0;
}

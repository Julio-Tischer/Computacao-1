#include <stdio.h>
#include <locale.h>
int main(){
    int hora, min, seg;
    printf("digite hora minuto e segundo com espaços entre cada numero\t");
    scanf("%d %d %d", &hora, &min, &seg);
    //Isso pede para inserir um horario, então pegar a resposta como int

    if(hora>1 && min>15){

        printf("Temos essa quantidade de segundos disponiveis: %d\n\n",hora*3600+min*60+seg);
        //Verifica se hora maior que 1 e se minutos são maiores que 15 e calculo os segundos
    }

    else{

        printf("temos %.1f minutos\n\n",hora*60.0+min+seg/60);
        //Caso contrario calculo os minutos
    }

    printf("Horario: %02d:%02d:%02d\n\n", hora, min, seg);
    //isso printa o horario estabelecido, mesmo que invalido.

    if (hora>24 || min>60 || seg>60){

        int segundostotais = hora*3600+min*60+seg;
        printf("esse horario não é muito real... Mas temos %d segundos, isto são %.2f dias",segundostotais, segundostotais/86400.0);
        //Isso é um presentinho que calcula quantos dias o tempo da se o horario for invalido
        //Para descobrir quantidade de dias, basta dividir quantidade de segundos por segundos em um dia (86400 segundos)
    }

    return 0;
}

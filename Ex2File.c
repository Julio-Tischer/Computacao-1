#include<stdio.h>
#define BUFFER 100

int main()
{
    FILE* Arquivo;
    float soma=0;
    float numero;

    Arquivo = fopen("/home/aluno/teste2.txt","r");

    if(Arquivo==NULL){return 1;}

    while(fscanf(Arquivo,"%f",&numero)==1)
    {
        printf("%0.1f\n",numero);
        soma = soma + numero;

    }
    printf("\nSoma:%.f\n",soma);
    fclose(Arquivo);


    return 0;
}

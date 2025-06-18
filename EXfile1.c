#include<stdio.h>
#define BUFFER 100

int main()
{
    //Eu vou criar o arquivo pelo programa tambem

    FILE* Arquivo;
    Arquivo = fopen("teste1.txt","w");
    fputs("Este arquivo contem dados de residencia\nNome Endereço Cidade Estado Pais\nMaria, Rua Carmelita, Colombo, PR, Brasil\nJose, Rua silva, Colombo, PR, Brasil\n",Arquivo);
    fclose(Arquivo);

    char escrito[BUFFER];

    Arquivo = fopen("teste1.txt","r");

    while(fgets(escrito,BUFFER,Arquivo))
    {
        printf("%s",escrito);
    }
    printf("\n");
    fclose(Arquivo);


    return 0;
}

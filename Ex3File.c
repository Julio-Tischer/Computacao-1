#include<stdio.h>
#define BUFFER 100

int main()
{
    FILE * arquivo;
    FILE* arquivo2;

    int i=1;
    char escrito[BUFFER];

    arquivo = fopen("teste1.txt","r");
    arquivo2 = fopen("teste1_.txt","w");


    while(fgets(escrito,BUFFER,arquivo))
    {
        printf("%d.%s",i,escrito);
        fprintf(arquivo2,"%d.%s",i,escrito);
        i++;
    }
    printf("\n");
    fclose(arquivo);


    return 0;
}


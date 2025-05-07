#include<stdio.h>
int bissexto(int ano){
    if (ano%4==0&&(ano%100 != 0||ano%400==0)){
    return 1;
    }
    else {return 0;}
}
int main(){
    int ano;
    printf("Me diga um ano:\t");
    scanf("%d",&ano);

    if (bissexto(ano)==1){
        printf("\n%d é um ano bissexto\n",ano);
    }
    else{
    printf("%d não é bissexto",ano);
    }
    return 0;
}

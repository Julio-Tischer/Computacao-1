#include<stdio.h>
#include<math.h>
int arredonda(float x){
    return round(x);
}

int main(){
    float X;
    printf("Escreva um numero:\t");
    scanf("%f",&X);
    printf("\nNumero arredondado:%d",arredonda(X));
}

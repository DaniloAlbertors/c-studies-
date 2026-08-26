#include <stdio.h>

float reais, dolar;

int main(){

    printf("Digite o valor em reais: ");
    scanf("%f", &reais);

    dolar = reais * 5.15;

    printf("O valor em dolar e: %.2f", dolar);
    return 0;


}
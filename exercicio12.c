#include <stdio.h>

int quant;
float total, unitario;
int main(){

    printf("Quantidade de itens no carrinho: ");
    scanf("%d", &quant);

    printf("Valor unitario medio: ");
    scanf("%f", &unitario);

    total = quant * unitario;

    printf("O valor total e de %.2f\n", total);
return 0;

}
#include <stdio.h>

float preco, valor;
int quant;

int main(){
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quant);

    valor = quant * preco;

    printf("Valor da compra: %.2f\n", valor);

    return 0;
}
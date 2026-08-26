#include <stdio.h>
float produto, valor, troco;
int main (){
    printf("Valor do Produto: ");
    scanf("%f", &produto);

    printf("Dinheiro pago: ");
    scanf("%f", &valor);
    troco = valor - produto;
    printf("O troco é de %.2f\n", troco);
    return 0;
}
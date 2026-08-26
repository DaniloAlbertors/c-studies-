#include <stdio.h>

int n1, n2, soma, diferenca, produto;
float divisao;
int main ()
{
    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite outro numero: ");
    scanf("%d", &n2);

    soma = n1 + n2;
    diferenca = n1 - n2;
    produto = n1 * n2;
    divisao = (float) n1 / n2;
    printf("A soma dos dois valores é: %d\n", soma);
    printf("A diferença é: %d\n", diferenca);
    printf("O produto é: %d\n", produto);
    printf("A divisão é: %.2f\n", divisao);

    return 0;
}
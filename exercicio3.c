#include <stdio.h>

int num1, num2, num3;
float media;
int main(){

printf("Digite o primeiro numero: ");
scanf("%d", &num1);

printf("Digite o segundo numero: ");
scanf("%d", &num2);

printf("Digite o terceiro numero: ");
scanf("%d", &num3);

media = (float) (num1 + num2 + num3) / 3;


printf("A media aritimetica dos 3 numeros e: %.2f\n", media);

return 0;
}

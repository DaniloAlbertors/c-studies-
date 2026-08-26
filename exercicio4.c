#include <stdio.h>

float c, f;

int main(){

    printf("Digite a temperatura em celsius: ");
    scanf("%f", &c);

    f = ((float)(1.8 * c) + 32);
    printf("A temperatura em fahrenheit e: %.2f", f);
}
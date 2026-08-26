#include <stdio.h>

float h, l, a;

int main(){
    printf("Qual a altura do retangulo: ");
    scanf("%f", &h);

    printf("Qual a largura: ");
    scanf("%f", &l);

    a = h * l;

    printf("A area do retangulo e: %.2f", a);
    return 0;
    
}
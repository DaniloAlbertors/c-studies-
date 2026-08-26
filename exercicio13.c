#include <stdio.h>

float a, b, c, discriminante;

int main(){

    printf("De o valor de [a] : ");
    scanf("%f", &a);

    printf("De o valor de [b] : ");
    scanf("%f", &b);

    printf("De o valor de [c] : ");
    scanf("%f", &c);

    discriminante = (b * b) - 4 * a * c;

    printf("O resultado do discriminante e: %.2f\n", discriminante);
    
    return 0;

}
#include <stdio.h>

float k, m, g;

int main(){

    printf("Digite o valor dos kilobyte's: ");
    scanf("%f", &k);

    m = (float) k / 1000;

    g = (float) m / 1000;

    printf("A quantidade de kilobyte's em mega: %.2f e em giga: %.2f", m, g);
    return 0;


}

#include <stdio.h>

float km, comb, autonomia;

int main(){

    printf("Quantidade de km's percorridos: ");
    scanf("%f", &km);

    printf("Quantidade do consumo de combustivel : ");
    scanf("%f", &comb);

    autonomia = (float) km / comb;

    printf("A autonomia  é de %.2f\n", autonomia);
    return 0;

}
#include <stdio.h>
float raio;
float area, perimetro;
int main(){
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = (3.14 * raio * raio);
    perimetro = (2 * 3.14 * raio);

    printf("Raio = %.2f, Area = %.2f, Perimetro = %.2f ", raio, area, perimetro);
    return 0;


}
#include <stdio.h>
int segundos;
float horas, minutos;
int main(){
    printf("Digite o numero em segundos: ");
    scanf("%d", &segundos);
    minutos = (float) segundos / 60;

    horas = (float) minutos / 60;

    printf("Os segundos em minutos: %.2f \nEm horas: %.2f", minutos, horas);
    return 0;

}
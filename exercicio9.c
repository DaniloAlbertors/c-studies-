#include <stdio.h>

float salario, aumento, total;

int main(){

printf("Qual o salario: ");
scanf("%f", &salario);

aumento = (salario * 15.0) / 100;
total = aumento + salario;

printf("Com o aumento o salario ficou %.2f\n", total);
return 0;
}
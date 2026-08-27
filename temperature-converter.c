#include <stdio.h>

float c, f;

int main(){

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &c);

    f = ((float)(1.8 * c) + 32);
    printf("The temperature in Fahrenheit is: %.2f", f);
}

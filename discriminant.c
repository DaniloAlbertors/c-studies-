#include <stdio.h>

float a, b, c, discriminant;

int main() {

    printf("Enter the value of [a]: ");
    scanf("%f", &a);

    printf("Enter the value of [b]: ");
    scanf("%f", &b);

    printf("Enter the value of [c]: ");
    scanf("%f", &c);

    discriminant = (b * b) - 4 * a * c;

    printf("The discriminant is: %.2f\n", discriminant);

    return 0;
}

#include <stdio.h>

float k, m, g;

int main() {

    printf("Enter the value in kilobytes: ");
    scanf("%f", &k);

    m = (float)k / 1000;

    g = (float)m / 1000;

    printf("The amount in megabytes: %.2f and in gigabytes: %.2f", m, g);

    return 0;
}

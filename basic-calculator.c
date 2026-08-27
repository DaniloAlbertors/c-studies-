C
#include <stdio.h>

int num1, num2, sum, difference, product;
float quotient;
int main ()
{
    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter another number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = (float) num1 / num2;
    printf("The sum of the two values is: %d\n", sum);
    printf("The difference is: %d\n", difference);
    printf("The product is: %d\n", product);
    printf("The division is: %.2f\n", quotient);

    return 0;
}

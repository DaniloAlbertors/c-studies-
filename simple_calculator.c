#include <stdio.h>

char operator;
int num1, num2;
float result;

int main(){

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (operator){
        case '+':
            result = num1 + num2;
            printf("%d + %d = %.2f", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%d - %d = %.2f", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%d * %d = %.2f", num1, num2, result);
            break;

        case '/':
            if (num2 == 0){
                printf("Error: Division by zero is not allowed.");
            }
            else {
                result = (float)num1 / num2;
                printf("%d / %d = %.2f", num1, num2, result);
            }
            break;
        default:
            printf("Error: Invalid operator");
    }
    return 0;
}

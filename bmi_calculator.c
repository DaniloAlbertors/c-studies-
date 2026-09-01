#include <stdio.h>

float weight, height, BMI;

int main(){

    printf("Enter weight: ");
    scanf("%f", &weight);

    printf("Enter height: ");
    scanf("%f", &height);

    BMI = weight / (height * height);

    if (BMI < 18.5) {
        printf("Underweight");
    }

    else if (BMI >= 18.5 && BMI <= 24.9) {
        printf("Normal weight");
    }

    else if (BMI >= 25 && BMI <= 29.9) {
        printf("Overweight");
    }
    
    else {
        printf("Obesity");
    }
    return 0;
}

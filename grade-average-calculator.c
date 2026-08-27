#include <stdio.h>

float g1, g2, g3, g4, average;

int main(){

    printf("First evaluation grade: ");
    scanf("%f", &g1);

    printf("Second evaluation grade: ");
    scanf("%f", &g2);

    printf("Third evaluation grade: ");
    scanf("%f", &g3);

    printf("Fourth evaluation grade: ");
    scanf("%f", &g4);

    average = ((float)(g1 + g2 + g3 + g4)/ 4);

    printf("The average grade is: %.2f", average);
    return 0;
}

#include <stdio.h>

float n1, n2, n3, n4, media;

int main(){

    printf("Nota da primeira avaliação: ");
    scanf("%f", &n1);

    printf("Nota da segunda avaliação: ");
    scanf("%f", &n2);

    printf("Nota da terceira avaliação: ");
    scanf("%f", &n3);

    printf("Nota da quarta avaliação: ");
    scanf("%f", &n4);

    media = ((float)(n1 + n2 + n3 + n4)/ 4);

    printf("A media das notas e: %.2f", media);
    return 0;

}
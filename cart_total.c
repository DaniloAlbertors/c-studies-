#include <stdio.h>

int quantity;
float total, unit_price;

int main() {

    printf("Enter the quantity of items in the cart: ");
    scanf("%d", &quantity);

    printf("Enter the average unit price: ");
    scanf("%f", &unit_price);

    total = quantity * unit_price;

    printf("The total price is: %.2f\n", total);

    return 0;
}

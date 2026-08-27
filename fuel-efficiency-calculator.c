#include <stdio.h>

float km, fuel, fuel_efficiency;

int main(){

    printf("Distance traveled in km: ");
    scanf("%f", &km);

    printf("Amount of fuel consumed: ");
    scanf("%f", &fuel);

    fuel_efficiency = (float) km / fuel;

    printf("Fuel efficiency is %.2f\n", fuel_efficiency);
    return 0;

}

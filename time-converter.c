#include <stdio.h>
int seconds;
float hours, minutes;
int main(){
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);
    minutes = (float) seconds / 60;

    hours = (float) minutes / 60;

    printf("Seconds in minutes: %.2f \nIn hours: %.2f", minutes, hours);
    return 0;

}

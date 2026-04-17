#include<stdio.h>

int main(){

    float celsius, fahrenheit;

    printf("Enter celsius value=");
    scanf("%f",&celsius);

    fahrenheit = (0.9/0.5)* celsius+32;

    printf("Fehrenheit value is %0.2f",fahrenheit);

    return 0;
}
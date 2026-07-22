/*Write a program to read a temperature in Celsius and convert it to Fahrenheit.*/

#include <stdio.h>

int main()
{
    float celcius;
    float fahrenheit;

    printf("Enter temperature in degrees: ");
    scanf("%f", &celcius);

    fahrenheit = (celcius * (9.0f / 5.0f)) + 32.0f;

    return 0;
}
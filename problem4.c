/* Write a program to read the radius of a circle and
   print its area and circumference. */

#include <stdio.h>

#define PI 3.14f

int input(void)
{
    int rad;

    printf("Enter radius: ");

    if (scanf("%d", &rad) != 1)
    {
        printf("Invalid input!\n");
        return 0;
    }

    return rad;
}

float area(int rad)
{
    return PI * rad * rad;
}

float circumference(int rad)
{
    return 2.0f * PI * rad;
}

int main(void)
{
    int rad = input();

    printf("Area          = %.2f sq. units\n", area(rad));
    printf("Circumference = %.2f units\n", circumference(rad));

    return 0;
}
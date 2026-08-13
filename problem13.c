/*Write a program to read three numbers and find the largest among them.*/

#include <stdio.h>

void input(int *num1, int *num2, int *num3)
{
    printf("Enter first number : ");
    scanf("%d", num1);

    printf("Enter second number : ");
    scanf("%d", num2);

    printf("Enter third number : ");
    scanf("%d", num3);
}

void largest(int num1, int num2, int num3, int *largest)
{
    if (num1 > num2 && num1 > num3)
    {
        *largest = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        *largest = num2;
    }
    else
    {
        *largest = num3;
    }
}

int main()
{
    int num1, num2, num3;
    int large;

    input(&num1, &num2, &num3);

    largest(num1, num2, num3, &large);

    printf("Largest number is : %d\n", large);

    return 0;
}
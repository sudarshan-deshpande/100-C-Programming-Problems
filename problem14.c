/*Write a program to read three numbers and find the smallest among them.*/

#include <stdio.h>

void input(int *num1, int *num2, int *num3)
{
    printf("Enter first number :");
    scanf("%d", num1);

    printf("Enter second number :");
    scanf("%d", num2);

    printf("Enter third number :");
    scanf("%d", num3);
}

void smallest(int num1, int num2, int num3, int *smallest)
{
    if (num1 < num2 && num1 < num3)
    {
        *smallest = num1;
    }
    else if (num2 < num1 && num2 < num3)
    {
        *smallest = num2;
    }
    else
    {
        *smallest = num3;
    }
}

int main()
{
    int num1, num2, num3, small;

    input(&num1, &num2, &num3);

    smallest(num1, num2, num3, &small);

    printf("Smallest number is : %d\n", small);

    return 0;
}
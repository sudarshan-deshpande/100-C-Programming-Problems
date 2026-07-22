/*Write a program to swap two numbers without using a third variable.*/

#include <stdio.h>

int input()
{
    int num;
    scanf("%d", &num);
    return num;
}

void swap(int *num1, int *num2)
{
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}
int main()
{
    int num1, num2;

    printf("Enter first number: ");
    num1 = input();

    printf("Enter second number: ");
    num2 = input();

    swap(&num1, &num2);

    printf("After swapping\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}
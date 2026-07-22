// Write a program to swap two numbers using a third variable.

#include <stdio.h>

int input()
{
    int num;
    scanf("%d", &num);
    return num;
}

void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    printf("Enter first number: ");
    int num1 = input();

    printf("Enter second number: ");
    int num2 = input();

    swap(&num1, &num2);

    printf("After swapping:\n");
    printf("First number  = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}
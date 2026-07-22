// Write a program to read two numbers and print their sum.

#include <stdio.h>

int input()
{
    int num;

    scanf("%d", &num);

    return num;
}

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    printf("Enter two numbers: ");

    int num1 = input();
    int num2 = input();

    printf("Sum = %d\n", sum(num1, num2));

    return 0;
}
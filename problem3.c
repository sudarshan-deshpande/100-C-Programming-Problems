#include <stdio.h>

int input(void)
{
    int num;
    scanf("%d", &num);
    return num;
}

int sum(int a, int b)
{
    return a + b;
}

int difference(int a, int b)
{
    return a - b;
}

int product(int a, int b)
{
    return a * b;
}

int quotient(int a, int b)
{
    return a / b;
}

int main(void)
{
    printf("Enter first number: ");
    int num1 = input();

    printf("Enter second number: ");
    int num2 = input();

    printf("Sum = %d\n", sum(num1, num2));
    printf("Difference = %d\n", difference(num1, num2));
    printf("Product = %d\n", product(num1, num2));

    if (num2 != 0)
        printf("Quotient = %d\n", quotient(num1, num2));
    else
        printf("Quotient = Undefined (division by zero)\n");

    return 0;
}
/*Write a program to find the product of all natural numbers from 1 to n (factorial of n).*/
#include <stdio.h>

void input(int *n)
{
    scanf("%d", n);
}

int factorial(int *n)
{
    int fact = 1;
    for (int i = 2; i <= *n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    printf("Enter n: ");
    input(&n);

    printf("Factorial of %d is %d\n", n, factorial(&n));
    return 0;
}
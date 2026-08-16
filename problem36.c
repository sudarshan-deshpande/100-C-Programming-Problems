/*Write a program to find the product of all digits of a number n.*/

#include <stdio.h>

void input(int *n)
{
    scanf("%d", n);
}

int product(int n)
{
    int p = 1;
    if (n == 0)
    {
        return 0;
    }
    while (n != 0)
    {
        p *= n % 10;
        n /= 10;
    }
    return p;
}

int main()
{
    int n;
    printf("Enter n: ");
    input(&n);

    printf("Product of digits in %d = %d\n", n, product(n));

    return 0;
}
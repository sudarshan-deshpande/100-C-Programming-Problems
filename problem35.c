/*Write a program to find the sum of all digits of a number n.*/

#include <stdio.h>

void input(int *n)
{
    scanf("%d", n);
}

int Sum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10; // extract last digit and add it
        n /= 10;       // remove last digit
    }
    return sum;
}

int main()
{
    int n;
    pritnf("Enter n:");
    input(&n);

    printf("Sum of digits in %d = %d\n", n, Sum(n));
    return 0;
}
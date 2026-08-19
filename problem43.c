/*Write a program to find the sum of the first and last digit of a number n.*/

#include <stdio.h>

void Input(int *n)
{
    scanf("%d", n);
}

int Sum(int *n)
{
    int first = 0;
    int last = 0;
    int sum = 0;

    last = *n % 10; // IMP
    while (*n >= 10)
    {
        *n /= 10;
    }
    first = *n; // IMP
    sum = first + last;

    return sum;
}
int main()
{
    int n;
    int original;

    printf("Enter n: ");
    Input(&n);

    original = n;

    printf("Sum of first and last digit of %d is : %d\n", original, Sum(&n));

    return 0;
}
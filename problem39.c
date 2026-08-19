/*Write a program to find the smallest digit in a number n.*/

#include <stdio.h>

void input(int *n)
{
    scanf("%d", n);
}

int smallest(int n)
{
    int small = 9;
    while (n != 0)
    {
        int digit = n % 10; // Extract digit
        if (small < digit)
        {
            small = digit; // Assign
        }
        n /= 10; // Remove
    }
    return small;
}

int main()
{
    int n;
    printf("Enter n: ");
    input(&n);

    printf("Smallest digit in %d is : %d\n", n, smallest(n));

    return 0;
}
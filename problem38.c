/*Write a program to find the largest digit in a number n.*/

#include <stdio.h>

void input(int *n)
{
    scanf("%d", n);
}

int largest(int n)
{
    int large = 0;
    while (n != 0)
    {
        int digit = n % 10; // Extract digit
        if (digit > large)
        {
            large = digit; // Update
        }
        n /= 10; // Delete
    }
    return large;
}

int main()
{
    int n;
    printf("Enter n:");
    input(&n);

    printf("Largest digit in %d is %d\n", n, largest(n));
    return 0;
}
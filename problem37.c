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
        int digit = n % 10;
        if (digit > large)
        {
            large = digit;
        }
        n /= 10;
    }
    return large;
}

int main()
{
    return 0;
}
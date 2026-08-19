/*Write a program to count the number of even digits and odd digits in a number n.*/

#include <stdio.h>

void input(int *n)
{
    scanf("%d", n);
}

void count(int n)
{
    int even_count = 0, odd_count = 0;
    if (n == 0)
    {
        even_count = 1;
    }
    while (n != 0)
    {
        int digit = n % 10;
        if (digit % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
        n /= 10;
    }

    printf("Number of even digits = %d\n", even_count);
    printf("Number of odd digits = %d\n", odd_count);
}

int main()
{
    int n;
    printf("Enter n:");
    input(&n);

    count(n);
    return 0;
}
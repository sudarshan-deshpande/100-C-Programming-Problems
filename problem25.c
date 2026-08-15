/*Write a program to find the sum of all natural numbers from 1 to n.*/

#include <stdio.h>

void input(int *n)
{
    scanf("%d", n);
}

int sum(int *n)
{
    int sum = 0;
    for (int i = 1; i <= *n; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int n;
    printf("Enter n: ");
    input(&n);

    printf("Sum of numbers from 1 to %d is : %d\n", n, sum(&n));
    return 0;
}
/*Write a program to find the sum of all odd numbers from 1 to n.*/

#include <stdio.h>

void input(int *n)
{
    scanf("%d", n);
}

int sum_of_odd(int *n)
{
    int sum = 0;
    for (int i = 1; i <= *n; i += 2) // IMP
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter n: ");
    input(&n);

    printf("Sum of odd numbers from 1 to %d is : %d\n", n, sum_of_odd(&n));

    return 0;
}
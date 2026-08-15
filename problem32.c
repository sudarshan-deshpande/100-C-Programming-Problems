/*Write a program to display all numbers from 1 to n that are divisible by 3 or 5.*/

#include <stdio.h>

void input(int *n)
{
    scanf("%d", n);
}

void divisible(int n)
{
    for (int i = 3; i <= n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    input(&n);

    printf("Numbers divisible by 3 or 5 are:\n");
    divisible(n);
    return 0;
}
/*Write a program to display all odd numbers from 1 to n.*/

#include <stdio.h>

void input(int *n)
{
    scanf("%d", n);
}

void display_odd_numbers(int *n)
{
    for (int i = 1; i <= *n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    input(&n);

    printf("Odd numbers from 1 to %d are :\n", n);
    display_odd_numbers(&n);

    return 0;
}
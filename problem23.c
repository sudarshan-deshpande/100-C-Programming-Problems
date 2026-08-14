/*Write a program to display all even numbers from 1 to n.*/

#include <stdio.h>

void input(int *n)
{
    scanf("%d", n);
}

void display_even_numbers(int *n)
{
    for (int i = 1; i <= *n; i++)
    {
        if (i % 2 == 0)
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

    printf("Even numbers from 1 to %d are :\n", n);
    display_even_numbers(&n);

    return 0;
}
/*Write a program to display all prime numbers from 1 to n.*/

#include <stdio.h>

void Input(int *n)
{
    scanf("%d", n);
}

void Display_prime_numbers(int n)
{
    if (n <= 1)
    {
        printf("Invalid Input\n");
        return;
    }

    for (int i = 2; i <= n; i++)
    {
        int flag = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    Input(&n);

    Display_prime_numbers(n);

    return 0;
}
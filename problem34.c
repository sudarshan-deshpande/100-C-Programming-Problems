/*Write a program to display all the digits of a number n (one per line).*/

#include <stdio.h>

void input(int *n)
{
    scanf("%d", n);
}

void display(int n)
{
    while (n != 0)
    {
        int digit = n % 10;
        n /= 10;
        printf("%d\n", digit);
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    input(&n);

    printf("Digits in %d :\n", n);
    display(n);
    return 0;
}
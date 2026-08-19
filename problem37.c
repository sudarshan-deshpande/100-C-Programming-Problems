/*Write a program to reverse a number n*/

#include <stdio.h>

void input(int *n)
{
    scanf("%d", n);
}

void reverse(int n)
{
    while (n != 0)
    {
        int digit = n % 10;
        n /= 10;
        printf("%d", digit);
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    input(&n);

    printf("Reverse of %d:", n);
    reverse(n);
    return 0;
}
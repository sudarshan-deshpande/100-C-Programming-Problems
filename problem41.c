/*Write a program to check whether a number n is a palindrome (reads the same reversed).*/

#include <stdio.h>

void Input(int *n)
{
    scanf("%d", n);
}

void Palindrome(int *n)
{
    int original = *n;
    int reverse = 0;
    int digit = 0;
    while (*n != 0)
    {
        digit = *n % 10;
        reverse = 10 * reverse + digit;
        *n /= 10;
    }

    if (reverse == original)
    {
        printf("%d is a palindrome number\n", original);
    }
    else
    {
        printf("%d is not a palindrome number\n", original);
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    Input(&n);

    Palindrome(&n);
    return 0;
}
/*Write a program to replace all zeros in a number n with the digit 5.*/

#include <stdio.h>

void Input(int *n)
{
    scanf("%d", n);
}

int Replace_zeroes_with_5(int *n)
{
    int original = *n;
    int result = 0;
    int digit = 0;
    int place = 1;

    if (*n == 0)
    {
        return 5;
    }
    while (*n != 0)
    {
        digit = *n % 10;
        if (digit == 0)
        {
            digit = 5;
        }
        result = result + digit * place;
        *n /= 10;
        place *= 10;
    }
    return result;
}
int main()
{
    int n;
    printf("Enter n: ");
    Input(&n);

    printf("Result = %d\n", Replace_zeroes_with_5(&n));
    return 0;
}
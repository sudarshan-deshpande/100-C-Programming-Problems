/*Write a program to count the number of digits in a number n.*/

#include <stdio.h>

void input(int *n)
{
    scanf("%d", n);
}

int count_digits(int n)
{
    int iCnt = 0;

    if (n == 0)
    {
        iCnt = 1;
    }
    else
    {
        while (n != 0)
        {
            n /= 10;
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int n;
    printf("Enter n: ");
    input(&n);
    printf("Number of digits in %d = %d\n", n, count_digits(n));
    return 0;
}
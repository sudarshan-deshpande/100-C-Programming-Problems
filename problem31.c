/*Write a program to count how many numbers from 1 to n are divisible by 3.*/

#include <stdio.h>

void input(int *n)
{
    scanf("%d", n);
}

int count(int n)
{
    int iCnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int m, n;
    printf("Enter n: ");
    input(&n);

    printf("%d numbers are divisible by 3 from 1 to %d\n", count(n), n);
    return 0;
}
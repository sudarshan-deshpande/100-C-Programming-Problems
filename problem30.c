/*Write a program to display all multiples of a number m up to n terms.*/

#include <stdio.h>

void input(int *m, int *n)
{
    scanf("%d", m);
    scanf("%d", n);
}

void table(int m, int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d X %d = %d\n", m, i, m * i);
    }
}

int main()
{
    int m, n;
    printf("Enter m & n: ");
    input(&m, &n);

    table(m, n);
    return 0;
}
/*Write a program to display the multiplication table of a number n.*/
#include <stdio.h>

void input(int *n)
{
    scanf("%d", n);
}

void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    input(&n);

    printf("Multiplication table of %d is: \n", n);
    table(n);

    return 0;
}
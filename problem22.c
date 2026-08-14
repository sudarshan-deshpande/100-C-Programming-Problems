/*Write a program to display all natural numbers from 1 to n in reverse order.*/

#include <stdio.h>

void input(int *n)
{
    scanf("%d", n);
}

void reverse_display(int *n)
{
    int i = *n;
    while (i > 0)
    {
        printf("%d\n", i);
        i--;
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    input(&n);

    printf("Numbers in reverse order : \n");
    reverse_display(&n);

    return 0;
}
/*Write a program to display all the natural numbers from 1 to n. (n is user input)*/

#include <stdio.h>

void input(int *n)
{
    scanf("%d", n);
}

void display(int *n)
{
    for (int i = 1; i <= *n; i++)
    {
        printf("%d\n", i);
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    input(&n);

    printf("First %d natural numbers are: ", n);
    display(&n);

    return 0;
}
/*Write a program to read a *number and check whether it is even or odd.*/
#include <stdio.h>

void even_odd(int *num)
{
    if (*num % 2 == 0)
    {
        printf("%d is an even number\n", *num);
    }
    else
    {
        printf("%d is an odd number\n", *num);
    }
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    even_odd(&num);
    return 0;
}
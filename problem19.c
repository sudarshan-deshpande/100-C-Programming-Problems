/*Write a program to read a number and check whether it is divisible by both 3 and 5.*/

#include <stdio.h>

void input(int *num)
{
    scanf("%d", num);
}

void check_divisibility(int *num)
{
    if (*num % 3 == 0 && *num % 5 == 0)
    {
        printf("The number is divisible by both 3 & 5\n");
    }
    else
    {
        printf("The number is not divisible by both 3 & 5\n");
    }
}

int main()
{
    int num;
    printf("Enter a number : ");
    input(&num);

    check_divisibility(&num);

    return 0;
}
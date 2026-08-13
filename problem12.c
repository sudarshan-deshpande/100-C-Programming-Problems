/*Write a program to read a number and check whether it is positive, negative or zero.*/

#include <stdio.h>

void check_number(int *num)
{
    if (*num > 0)
    {
        printf("Number is positive\n");
    }
    else if (*num < 0)
    {
        printf("Number is negative\n");
    }
    else
    {
        printf("Number is zero\n");
    }
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    check_number(&num);

    return 0;
}
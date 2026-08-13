/*Write a program to read a year and check whether it is a leap year or not.*/

#include <stdio.h>

void leap(int year)
{
    if (year > 0 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
    {
        printf("Year is leap\n");
    }
    else
    {
        printf("Year is not leap\n");
    }
}

int main()
{
    int year;

    printf("Enter year : ");
    scanf("%d", &year);

    leap(year);

    return 0;
}
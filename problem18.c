/*Write a program to read the marks of a student and print the grade (A/B/C/D/Fail).*/

#include <stdio.h>

void input(int *marks)
{
    scanf("%d", marks);
}

void grade(int *marks)
{
    if (*marks < 0 || *marks > 100)
    {
        printf("Invalid marks");
    }
    else if (*marks <= 100 && *marks >= 90)
    {
        printf("Grade : A");
    }
    else if (*marks < 90 && *marks >= 75)
    {
        printf("Grade : B");
    }
    else if (*marks < 75 && *marks >= 60)
    {
        printf("Grade : C");
    }
    else if (*marks < 60 && *marks >= 40)
    {
        printf("Grade : D");
    }
    else
    {
        printf("Fail");
    }
}

int main()
{
    int marks;

    printf("Enter marks : ");
    input(&marks);

    grade(&marks);

    return 0;
}
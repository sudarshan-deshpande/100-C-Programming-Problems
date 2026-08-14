/*Write a program to read the age of a person and check whether they are eligible to vote.*/

#include <stdio.h>

void input(int *age)
{
    scanf("%d", age);
}

void check_eligibility(int *age)
{
    if (*age < 0)
    {
        return;
    }

    if (*age >= 18)
    {
        printf("Person is eligible to vote\n");
    }
    else
    {
        printf("Person is not eligible to vote\n");
    }
}

int main()
{
    int age;
    printf("Enter age : ");
    input(&age);

    check_eligibility(&age);

    return 0;
}
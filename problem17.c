/*Write a program to read a character and check whether it is an alphabet, digit or special
symbol.*/

#include <stdio.h>

void input(char *ch)
{
    scanf("%c", ch);
}

void check_character(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("%c is an alphabet\n", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a digit\n", ch);
    }
    else
    {
        printf("%c is a special symbol\n", ch);
    }
}

int main()
{
    char ch;
    printf("Enter a character: ");
    input(&ch);

    check_character(ch);

    return 0;
}
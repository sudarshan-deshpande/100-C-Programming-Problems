/*Write a program to read a character and check whether it is a vowel or a consonant.*/

#include <stdio.h>

void check_vowel(char ch)
{
    if (
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is a vowel\n", ch);
    }
    else
    {
        printf("%c is a consonant\n", ch);
    }
}

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    check_vowel(ch);

    return 0;
}
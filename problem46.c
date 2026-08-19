/*Write a program to display the first n prime numbers.*/

#include <stdio.h>

void Input(int *n)
{
    scanf("%d", n);
}

void Display_Prime(int n)
{
    int count = 0;
    int i = 2;

    if (n <= 0)
    {
        return;
    }

    while (count < n)
    {
        int flag = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            printf("%d ", i);
            count++;
        }
        i++;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter n: ");
    Input(&n);

    Display_Prime(n);
    return 0;
}
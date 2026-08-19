/*Write a program to read a number and check whether it is prime or not.*/

/*A prime number is a number that:

- is greater than 1
- has exactly two factors: 1 and itself.
*/

#include <stdio.h>

void Input(int *n)
{
    scanf("%d", n);
}

void check_prime(int n)
{
    if (n <= 1)
    {
        printf("%d is not a prime number\n", n);
        return;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is not a prime number\n", n);
            return;
        }
    }
    printf("%d is a prime number\n", n);
}

int main()
{
    int n;
    printf("Enter n: ");
    Input(&n);

    check_prime(n);

    return 0;
}
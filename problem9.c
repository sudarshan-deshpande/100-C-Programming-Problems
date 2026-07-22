/*Write a program to read the marks of 5 subjects and print the total and average.*/

#include <stdio.h>

void input(int arr[5])
{
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int total(int arr[5])
{
    int sum = arr[0];
    for (int i = 1; i < 5; i++)
    {
        sum += arr[i];
    }
    return sum;
}

float average(int arr[5])
{
    return (float)total(arr) / 5;
}

int main()
{
    int arr[5];
    printf("Enter elements in array: ");
    input(arr);

    printf("Total = %d\n", total(arr));
    printf("Average = %.2f\n", average(arr));

    return 0;
}
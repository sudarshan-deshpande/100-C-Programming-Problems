/*Write a program to read seconds and convert them into hours, minutes and seconds.*/
#include <stdio.h>

int input_seconds()
{
    int seconds;
    scanf("%d", &seconds);
    return seconds;
}

int hours(int seconds)
{
    return seconds / 3600;
}

int minutes(int seconds)
{
    return (seconds % 3600) / 60;
}

int remaining_seconds(int seconds)
{
    return seconds % 60;
}

int main()
{
    int seconds;

    printf("Enter time in seconds: ");
    seconds = input_seconds();

    printf("\nHours   = %d\n", hours(seconds));
    printf("Minutes = %d\n", minutes(seconds));
    printf("Seconds = %d\n", remaining_seconds(seconds));

    return 0;
}
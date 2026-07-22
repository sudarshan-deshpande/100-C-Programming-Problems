/*Write a program to read the length and breadth
of a rectangle and print its area and perimeter.*/

#include <stdio.h>

int input()
{
    int num;
    scanf("%d", &num);
    return num;
}

int area(int length, int breadth)
{
    return length * breadth;
}

int perimeter(int length, int breadth)
{
    return 2 * (length + breadth);
}

int main()
{
    int length, breadth;
    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter breadth: ");
    scanf("%d", &breadth);

    printf("Area = %d sq units\n", area(length, breadth));
    printf("Perimeter = %d units\n", perimeter(length, breadth));

    return 0;
}
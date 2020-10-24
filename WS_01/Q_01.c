#include <stdio.h>

int main(void)
{
    int a, b, sum, sumSquare;
    float average;

    printf("enter number 1: ");
    scanf("%d", &a);

    printf("enter number 2: ");
    scanf("%d", &b);

    sum = a + b;
    average = (a + b) / 2.0;
    sumSquare = (a * a) + (b * b);

    printf("Your numbers were: %d and %d\n", a, b);
    printf("Sum: %d\nAverage: %.2f\nSum of Squares: %d\n", sum, average, sumSquare);

    return 1;
}
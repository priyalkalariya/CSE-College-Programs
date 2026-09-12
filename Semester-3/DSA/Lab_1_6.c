//(6) WAP to swap the first and last digit of a number. 
#include <stdio.h>
#include <math.h>
void main()
{
    int n, temp, first, last, digits, middle, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    last = n % 10;
    digits = 0;
    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }
    first = n / pow(10, digits - 1);
    middle = (n % (int)pow(10, digits - 1)) / 10;
    result = last * pow(10, digits - 1) + middle * 10 + first;
    printf("Number after swapping: %d", result);
}
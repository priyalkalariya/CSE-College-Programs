//  Write a recursive function to find the sum of digits of a given number.

 
#include <stdio.h>
int sum_of_digits(int n);
int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The sum of digits of %d is %d\n", n, sum_of_digits(n));

    return 0;
}
int sum_of_digits(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + sum_of_digits(n / 10);
} 
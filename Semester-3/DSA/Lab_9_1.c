//  Write a recursive function to generate the nth Fibonacci number.

#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("The %dth Fibonacci number is %d\n", n, fibonacci(n));

    return 0;
}

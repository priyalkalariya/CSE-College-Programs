//(8) WAP to check whether a number is a Harshad (Niven) Number or not.
#include<stdio.h>
void main()
{
    int n, i, sum = 0, rem;
    printf("Enter n:");
    scanf("%d", &n);
    while(n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    if(n % sum == 0)
    {
        printf("Harshad number");
    }
    else
    {
        printf("Not a harshad number");
    }
}
//(7) WAP to check whether a number is a Duck Number. 
#include<stdio.h>
void main()
{
    int n, rem, i;
    int duck = 0;
    printf("Enter n:");
    scanf("%d", &n);
    while (n!=0)
    {
        rem = n % 10;
        if(rem == 0)
        {
            duck = 1;
            break;
        }
        n = n / 10;
    }
    if(duck)
    {
        printf("Duck number");
    }
    else
    {
        printf("Not a duck number");
    }
}

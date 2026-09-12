// WAP to check whether two numbers are co-prime or not. 
#include<stdio.h>
void main()
{
    int a,b,i,gcd=1;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    if(gcd==1)
    {
        printf("number is co prime");
    }
    else{
        printf("number is not co prime");
    }
}
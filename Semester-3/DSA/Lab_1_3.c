// WAP to count the number of digits, sum of digits and product of digits of a no.


#include<stdio.h>
void main()
{
    int n,i,count=0,rem;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        rem=n%10;
        n=n/10;
        count++;
    }
    printf("count: %d",count);
}

//  WAP to check whether a given number is a Happy Number or not. 
#include<stdio.h>
void  main()
{
    int n, sum, rem, temp;
    printf("Enter a number:");
    scanf("%d", &n);
    while(n!=1 && n!=4)
    {
        sum=0;
        temp=n;
        while(temp>0)
        {
            rem=temp%10;
            sum=sum+(rem*rem);
            temp=temp/10;
        }
        n=sum;
    }
    if(n==1)
    {
        printf("it's happy no.");
    }
    else{
        printf("it's not happy no.");
    }
}
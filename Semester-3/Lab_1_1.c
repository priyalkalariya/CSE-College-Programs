//WAP to calculate area of a Circle (A = πr2).
// #include<stdio.h>
// int main()
// {
//     float pi=3.14;
//     float area;
//     int r;
//     printf("enter radius");
//     scanf("%d",&r);
//     area=pi*r*r;
//     printf("area is:%f",area);
// }

// WAP to print the Fibonacci series up to n terms

#include<stdio.h>
int main()
{
    int a=0,b=1,n,i,sum=0;
    printf("enter n here:");
    scanf("%d",&n);
    
    if(n==1)
    {
        printf("%d",a);
    }
    else if(n==2)
    {
        printf("%d %d",a,b);
    }
    else
    {
         for(i=0;i<n;i++)
    {
        printf("%d",a);
        sum=a+b;
        b=a;
        a=sum;
    }
    }
   
}
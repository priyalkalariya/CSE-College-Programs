//  WAP to insert a number at a given location in an array. 

#include<stdio.h>
int main()
{ 
    int a[100],n,i,pos,x;
    printf("enter size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element:%d",i+1);
        scanf("%d",&a[i]);

    }
    printf("enter position:");
    scanf("%d",&pos);
    printf("enter element:");
    scanf("%d",&x);
    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=x;
    n++;
    printf("aray after insertion:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}

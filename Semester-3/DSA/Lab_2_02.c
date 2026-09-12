//  WAP to delete a number from a given location in an array. 

#include<stdio.h>
void main()
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
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    printf("aray after insertion:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}

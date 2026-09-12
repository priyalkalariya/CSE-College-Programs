// WAP to merge two unsorted arrays. 
#include<stdio.h>
void main()
{
    int a[100],b[100],c[200];
    int n1,n2,i;
    printf("enter size of first array");
    scanf("%d ",&n1);
    for(i=0;i<n1;i++)
    {
        printf("enter element %d:",i+1);
        scanf("%d ",&a[i]);
    }
    printf("enter size of second element %d:",i+1);
        scanf("%d ",&n2);
        for(i=0;i<n2;i++)
        {
           
        printf("enter element %d:",i+1);
        scanf("%d ",&b[i]); 
        }
        for(i=0;i<n1;i++)
        {
            c[i]=a[i];
        }
         for(i=0;i<n2;i++)
        {
            c[n1+i]=b[i];
        }
        printf("merged array:\n");
        for(i=0;i<n1+n2;i++)
        {
            printf("%d ",c[i]);
        }
}
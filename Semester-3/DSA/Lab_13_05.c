// WAP to sort the array elements using Pointer. 
#include<stdio.h>

void main(){
    int n,i,j,temp;
    printf("enter the no.of elements:");
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(*(ptr+j)>*(ptr+j+1))
            {
                temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;
            }
        }
    }
   printf("the sorted array is:\n");
   for(i=0;i<n;i++)
   {
       printf("%d ",*(ptr+i));
   }
}

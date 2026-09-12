//  WAP to delete a number from an array that is already sorted in an ascending order. 
#include<stdio.h>
void main()
{
    int a[100], n, i, num, pos;
    printf("Enter size:");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element-%d: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("Enter number to delete: ");
    scanf("%d", &num);
    for(pos = 0; pos < n; pos++)
    {
        if(a[pos] == num)
        {
            break;
        }
    }

    if(pos == n)
    {
        printf("Number not found");
    }
    else
    {
        for(i = pos; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n--;

        printf("Array after deletion: ");
        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
}



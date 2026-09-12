//18. WAP to merge two sorted arrays.
#include<stdio.h>
void main()
{
    int a[100], b[100], c[200];
    int n, m, i, j, k, temp;

    printf("Enter size of array-1: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element-%d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter size of array-2: ");
    scanf("%d", &m);

    for(i = 0; i < m; i++)
    {
        printf("Enter element-%d: ", i + 1);
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(i = 0; i < m - 1; i++)
    {
        for(j = i + 1; j < m; j++)
        {
            if(b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    i = 0;
    j = 0;
    k = 0;

    while(i < n && j < m)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while(i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while(j < m)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged Array in Ascending Order: ");
    for(i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
}
// Write a recursive function to calculate the sum of all elements in an array. 

#include <stdio.h>
int sumofarray(int arr[], int n)
{
    if (n <= 0)
        return 0;

    return arr[n - 1] + sumofarray(arr, n - 1);
}

int main(void)
{
    int n;

    printf("Enter  number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf(" sum of all elements in the array is %d\n", sumofarray(arr, n));

    return 0;
}



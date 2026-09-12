// . Write a recursive function to find the largest element in a given array.
#include <stdio.h>
int largest(int arr[], int n)
{
    if (n == 1)
        return arr[0];

    int large = largest(arr, n - 1);

    if (arr[n - 1] > large)
        return arr[n - 1];
    else
        return large;
}

int main(void)
{
    int n;

    printf("Enter the no of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("The largest element in the array is %d\n", largest(arr, n));

    return 0;
}
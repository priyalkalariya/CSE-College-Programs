// WAP to calculate the sum of n numbers using Pointer.
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;
    int sum = 0;

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    for(i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("The sum of the elements is: %d\n", sum);

    return 0;
}
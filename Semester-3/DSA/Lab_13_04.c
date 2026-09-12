// WAP to find the largest element in the array using Pointer. 
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;
    int largest;

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    largest = *(ptr + 0);
    for(i = 1; i < n; i++) {
        if(*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    printf("the largest element in array is:%d\n",largest);
    return 0;
}

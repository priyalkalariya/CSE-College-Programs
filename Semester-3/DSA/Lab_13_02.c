// WAP to get and print the array elements using Pointer. 
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr; 

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i); 
    }

    printf("The array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); 
    }
    printf("\n");

    return 0;
}

//  Write a recursive function to convert a decimal number into its binary equivalent. 
#include <stdio.h>

void decimaltobinary(int n)
{
    if (n == 0)
        return;

    decimaltobinary(n / 2);
    printf("%d", n % 2);
}

int main(void)
{
    int decimal;

    printf("Enter  decimal number: ");
    scanf("%d", &decimal);

    printf("Binary equivalent: ");
    decimaltobinary(decimal);
    printf("\n");

    return 0;
} 


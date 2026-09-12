//(5) WAP to find the largest and smallest digit in a number. 
#include <stdio.h>
void main()
{
    int n, rem, largest = 0, smallest = 9;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        if (rem > largest)
        {
            largest = rem;
        }
        if (rem < smallest)
        {
            smallest = rem;
        }
        n = n / 10;
    }
    printf("Largest digit: %d\n", largest);
    printf("Smallest digit: %d\n", smallest);
}
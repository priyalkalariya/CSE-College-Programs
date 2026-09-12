//(4) WAP to count the frequency of each digit in a number.
#include <stdio.h>
void main()
{
    int n, temp, rem, i, count;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 0; i <= 9; i++)
    {
        temp = n;
        count = 0;
        while(temp != 0)
        {
            rem = temp % 10;
            if(rem == i)
            {
                count++;
            }
            temp = temp / 10;
        }
        if(count != 0)
        {
            printf("%d = %d\n", i, count);
        }
    }
}
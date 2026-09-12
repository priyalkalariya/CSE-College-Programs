// 21. Anagram Game
#include<stdio.h>
#include<string.h>
void main()
{
    char a[50], b[50], temp;
    int i, j;
    printf("Enter first word: ");
    scanf("%s", a);

    printf("Enter second word: ");
    scanf("%s", b);

    if(strlen(a) != strlen(b))
    {
        printf("Not an Anagram");
    }
    else
    {
        for(i = 0; a[i] != '\0'; i++)
        {
            for(j = i + 1; a[j] != '\0'; j++)
            {
                if(a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        for(i = 0; b[i] != '\0'; i++)
        {
            for(j = i + 1; b[j] != '\0'; j++)
            {
                if(b[i] > b[j])
                {
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        if(strcmp(a, b) == 0)
        {
            printf("Anagram!");
        }
        else
        {
            printf("Not an Anagram!");
        }
    }
}
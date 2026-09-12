// WAP to determine if an input character string is of the form aibi where i >= 1 i.e., Number of ‘a’ should be equal to number of ‘b’.

#include <stdio.h>
#include <string.h>
#define max 100
void main()
{
    char str[max], stack[max];
    int top = -1;
    int i, flag = 1;
    printf("Enter string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a')
        {
            top++;
            stack[top] = 'a';
        }
        else if(str[i] == 'b')
        {
            if(top == -1)
            {
                flag = 0;
                break;
            }

            top--;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if(top != -1)
    {
        flag = 0;
    }

    if(flag == 1 && i > 0)
    {
        printf("String is of the form a^i b^i\n");
    }
    else
    {
        printf("String is not of the form a^i b^i\n");
    }
}
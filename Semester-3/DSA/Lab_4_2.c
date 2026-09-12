// How stack can be used to recognize strings aca, bcb, abcba, abbcbba? WAP to solve the above problem.

#include <stdio.h>
#include <string.h>
#define max 15
void main()
{
    char str[max], stack[max];
    int top=-1;
    int i, n, mid;
    int flag=1;
    printf("Enter string: ");
    scanf("%s", str);
    n = strlen(str);
    mid = n/2;
    for(i = 0; i < mid; i++)
    {
        top++;
        stack[top] = str[i];
    }
    if(n%2!= 0)
    {
        i++;
    }

  
    while(i<n)
    {
        if(stack[top]!=str[i])
        {
            flag = 0;
            break;
        }

        top--;
        i++;
    }

    if(flag==1)
    {
        printf("String is recognized!\n");
    }
    else
    {
        printf("String is not recognized!\n");
    }
}

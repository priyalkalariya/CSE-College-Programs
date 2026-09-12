// 28. Vowel Anxiety Problem 

# include<stdio.h>
#include<string.h>
# define N 50
char stack[N];
int top=-1;

void push(char x)
{
    top++;
    stack[top]=x;
}
char pop()
{
    return stack[top--];
}

int vowel(char ch)
{
    if(ch == 'a'|| ch == 'A'||ch == 'e'||ch == 'E'||ch == 'I'||ch == 'i'||ch == 'o'||ch == 'O'||ch == 'u'||ch == 'U')
    {
        return 1;
    }
}

void main()
{
    char S[N], temp[N];
    int i,j,n;
    printf("enter length of string:");
    scanf("%d",&n);
    printf("enter string:");
    scanf("%s",S);

    for(i=0;i<n;i++)
    {
        push(S[i]);
    }
    if(vowel (S[i]))
    {
        while(S!='\0')
        {
            temp[j]=pop();
            j++;
        }
        for(int k=0;k<j;k++)
        {
            push(temp[k]);
        }
        j=0;
    }
    printf("final string:");
    for(i=0;i<=top;i++)
    {
        printf("%c",&stack[i]);
    }
}

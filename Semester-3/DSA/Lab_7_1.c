// WAP to convert infix notation to postfix notation using stack.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

# define N  50
char stack[N];
int top = -1;

int input_pre(char ch)
{
    if(ch == '+' || ch == '-')
    {
        return 1;
    }
    else if(ch == '*' || ch == '/')
    {
        return 3;
    }
    else if(ch == '^')
    {
        return 6;
    }
    else if(ch == '(')
    {
        return 9;
    }
    else if(ch == ')')
    {
        return 0;
    }
    else
    {
        return 7;
    }
}


int stack_pre(char ch)
{
    if(ch == '+' || ch == '-')
    {
        return 2;
    }
    else if(ch == '*' || ch == '/')
    {
        return 4;
    }
    else if(ch == '^')
    {
        return 5;
    }
    else if(ch == '(')
    {
        return 0;
    }
    else
    {
        return 8;
    }
}

void push(char x)
{
    if(top >= N-1)
    {
        printf("Stack overflow");
        exit(0);
    }
    top++;
    stack[top] = x;
}

char pop()
{
    char x;
    if(top == -1)
    {
        printf("Stack underflow");
        exit(0);
    }
    x = stack[top];
    top--;
    return x;
}

int rank(char ch)
{
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
    {
        return -1;
    }
    else if(ch == '(')
    {
        return 0;
    }
    else if(ch == ')')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void revpol(char infix[])
{
    char postfix[N];
    char next, temp;
    int i = 0, j = 0;
    int rank_count = 0;
    top = -1;

    push('(');
    while(infix[i] != '\0')
    {
        next = infix[i];
        while( stack_pre(stack[top]) > input_pre(next))
        {
            temp = pop();
            if(temp == '(')
            {
                printf("Invalid");
                return;
            }

            postfix[j] = temp;
            j++;

            rank_count = rank_count + rank(temp);
            if(rank_count < 1)
            {
                printf("Invalid\n");
                return;
            }
        }

        if(stack_pre(stack[top]) != input_pre(next))
        {
            push(next);
        }
        else
        {
            pop();
        }
        i++;
    }

    while(top >= 0)
    {
        temp = pop();
        if(temp == '(')
        {
            break;
        }
        postfix[j] = temp;
        j++;

        rank_count = rank_count + rank(temp);
    }

    postfix[j] = '\0';

    if(top != -1 || rank_count != 1)
    {
        printf("Invalid");
    }
    else
    {
        printf("Postfix Expression: %s\n", postfix);
    }
}

int main()
{
    char infix[N];
    printf("Enter infix expression:");
    scanf("%s", infix);
    revpol(infix);
}


// WAP for evaluation of prefix Expression using Stack. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define N 50


int top = -1;
int s[50];

void push(int x)
{
    if(top >= N-1)
    {
        printf("stack overflow");
        return;
    }
    top++;
    s[top]=x;
}

int pop()
{
    int x;
    if(top==-1)
    {
        printf("stack underflow");
        return -1;
    }
    top--;
    return s[top+1];
}

void main()
{
    char postfix[]="+12";
    for(int i=strlen(postfix)-1;i>=0;i--)
    {
        char temp=postfix[i];
        if(isdigit(temp))
        {
            push(temp-'0');
        }
        else{
            int op1=pop();
            int op2=pop();

            switch(temp)
            {
                case '+':
                push(op1+op2);
                break;

                case '-':
                push(op1-op2);
                break;

                case '*':
                push(op1*op2);
                break;

                 case '/':
                push(op1/op2);
                break;

                 case '^':
                push(pow(op1,op2));
                break;

            }
        }
    }

    printf("ans is:%d",pop());

}

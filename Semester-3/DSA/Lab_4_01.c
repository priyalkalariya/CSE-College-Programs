//  Write a menu driven program to implement following operations on the Stack 
// using an Array 
// • PUSH, POP, DISPLAY 
// • PEEP, CHANGE 

// #include<stdio.h>
// #define max 5
// int stack [max];
// int top=-1;
// void push()
// {
// int x;
// if(top== max -1)
// {
//   printf("stack overflow");  
// }
// else{
//     printf("enter element");
//     scanf("%d",&x);
//     top++;
//     stack[top]=x;
//     printf("element pushed successfully");

// }
// }
// void pop()
// {
//     if(top== -1)
//     {
//         printf("deleted element: %d\n",stack[top]);
//         top--;
//     }
//     else
//     {
//         printf("Deleted element: %d\n", stack[top]);
//         top--;
//     }
// }
// void display()
// {
//     int i;
//     if(top==-1)
//     {
//         printf("stack is empty\n");
//     }
//     else{
//         printf("stack element are:\n");
//         for(i=top; i>=0;i--)
//         {
//             printf("%d\n",stack[i]);
//         }
//     }
// }
// void main()
// {
//     int choice;
//     do
//     {
//      printf("\n--- STACK MENU ---\n");
//         printf("1. PUSH\n");
//         printf("2. POP\n");
//         printf("3. DISPLAY\n");
//         printf("4. EXIT\n");
//        printf("Enter your choice: ");
//         scanf("%d", &choice);
       
//        switch(choice)
//        {
//         case 1:
//         push();
//         break;

//         case 2:
//         pop();
//         break;

//         case 3:
//         display();
//         break;
//         case 4:
//         printf("program ended");
//         break;

//         default:
//         printf("invalid choice");
//        }
//     } while (choice!=4);
    
// }

// • PEEP, CHANGE 
# include<stdio.h>
#include<stdlib.h>

void peep(int[], int, int);
void change(int[], int, int, int);
void display(int[], int);

void main()
{
    int choice, x, a[100], n, top = -1, i;
    printf("Enter size of array:");
    scanf("%d", &n);

    printf("Enter stack elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        top = top + 1;
        a[top] = x;
    }

    do
    {
        printf("\nPress 1 for Peep Operation\n");
        printf("Press 2 for Change Operation\n");
        printf("Press 3 for Display Operation\n");
        printf("Press 0 for Exit\n");

        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Peep Operation\n");
                printf("Enter position: ");
                scanf("%d", &i);
                peep(a, top, i);
                break;
 
            case 2:
                printf("Change Operation\n");
                printf("Enter position:");
                scanf("%d", &i);
                printf("Enter new value:");
                scanf("%d", &x);
                change(a, top, i, x);
                break;

            case 3:
                printf("Display Operation\n");
                display(a, top);
                break;

            case 0:
                exit(0);

            default:
                printf("Enter valid choice\n");
        }
    } while(1);
}

void peep(int a[], int top, int i)
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else if(top - i + 1 < 0)
    {
        printf("Stack is underflow\n");
    }
    else
    {
        printf("ith element is: %d\n", a[top-i+1]);
    }
}

void change(int a[], int top, int i, int x)
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else if(top - i + 1 < 0)
    {
        printf("Stack is underflow\n");
    }
    else
    {
        a[top-i+1] = x;

        printf("Changed value is: %d\n", a[top-i+1]);
    }
}

void display(int a[], int top)
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements are:\n");

        while(top >= 0)
        {
            printf("%d\n", a[top]);
            top = top - 1;
        }
    }
}

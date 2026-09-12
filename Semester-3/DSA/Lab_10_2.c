//  Write a menu driven program to implement following operations on a circular 
// queue using an Array 
// • Insert 
// • Delete 
// • Display all elements of the queue 
// without pointer

#include <stdio.h>
#define N 5
int queue[N];
int F = -1;
int R = -1;

void insert(int y)
{ 
    if((R+1)%N==F)
    {
        printf("Queue Overflow\n");
        return;
    }
    R = (R+1)%N;
    queue[R] = y;
    if(F == -1)
    {
        F = 0;
    }
  
    printf("%d inserted into circular queue\n", y);
}

int delete()
{
    if(F == -1)
    {
        printf("Queue underflow\n");
        return -1;
    }
    int deletedValue = queue[F];
    if(F == R)
    {
        F = -1;
        R = -1;
    }
    else
    {
        F = (F+1)%N;
    }
    printf("%d deleted from circular queue\n", deletedValue);
    return deletedValue;
}
 void display()
{
    if(F == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Circular Queue elements: ");
     for(int i = F; i != R; i = (i + 1) % N)
    {
        printf("%d ", queue[i]);
    }
    printf("%d\n", queue[R]);
}

void main()
{
    int choice, value;
    while(1)
    {
        printf("\nCircular Queue Operations:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4: 
            // printf("Ooo stree kal ana!!\n");
                return;
            default:
                printf("Invalid choice\n");
        }
    }
}
// Write a menu driven program to implement following operations on the Queue using an Array 
// • ENQUEUE 
//  DEQUEUE 
// • DISPLAY

#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        printf("Queue is full\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = value;
    printf("%d enqueued to queue\n",value);
}

void dequeue()

{
    if (front == -1)
    {
        printf("Queue underflow\n");
        return;
    }
    printf("%d dequeued from queue\n", queue[front]);
    front++;
}

void display()
{
    if (front == -1)
    {
        printf("Queue underflow\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

void main()
{
    int choice, value;
    while (1)
    {
        printf("\nQueue Operations:\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break; 
            case 3:
                display();
                break;
            case 4:
                return;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

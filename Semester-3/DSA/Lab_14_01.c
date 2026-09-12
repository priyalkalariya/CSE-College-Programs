// Write a menu driven program to implement the following operations on a singly
// linked list:
// 1. Insert a node at the front
// 2. Insert a node at the end
// 3. Insert a node in order
// 4. Display all nodes
// 5. Delete the first node
// 6. Delete the last node
// 7. Delete a node from a specified position
// 8. Count the number of nodes
// 9. Exit

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front =NULL;
struct node *rear = NULL;

void insert_front(int x)
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->next=NULL;

    if(front==NULL)
    {
        front=new;
        rear=new;
    }
    else
    {
        new->next=front;
        front=new;

    }
     

}

void insert_end(int x)
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->next=NULL;

    if(front==NULL)
    {
        front=new;
        rear=new;
    }
    else
    {
        rear->next=new;
        rear=new;
    }
}

void insert_order(int x)
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->next=NULL;

    if(front==NULL)
    {
        front=new;
        rear=new;
    }
    else if(x<front->data)
    {
        new->next=front;
        front=new;
    }
    else
    {
        struct node *temp=front;
        while(temp->next!=NULL && temp->next->data<x)
        {
            temp=temp->next;
        }
        new->next=temp->next;
        temp->next=new;
        if(new->next==NULL)
        {
            rear=new;
        }
    }
}

void display()
{
    struct node *temp=front;
    if(front==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}

void delete_front()
{
    if(front==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *temp=front;
        front=front->next;
        free(temp);
    }
}

void delete_end()
{
    if(front==NULL)
    {
        printf("list is underflow\n");
    }
    else
    {
        struct node *temp=front;
        if(front==rear)
        {
            front=NULL;
            rear=NULL;
            free(temp);

        }
    }
}

void delete_position(int pos)
{
    if(front==NULL)
    {
        printf("List is empty\n");
    }
    else if(pos==1)
    {
        delete_front();
    }
    else
    {
        struct node *temp=front;
        for(int i=1;i<pos-1 && temp!=NULL;i++)
        {
            temp=temp->next;
        }
        if(temp==NULL || temp->next==NULL)
        {
            printf("Position not found\n");
        }
        else
        {
            struct node *del=temp->next;
            temp->next=del->next;
            if(del==rear)
            {
                rear=temp;
            }
            free(del);
        }
    }
}

void count_nodes()
{
    struct node *temp=front;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

void main()
{
    int choice,x,pos;
    while(1)
    {
        printf("1. Insert a node at the front\n");
        printf("2. Insert a node at the end\n");
        printf("3. Insert a node in order\n");
        printf("4. Display all nodes\n");
        printf("5. Delete the first node\n");
        printf("6. Delete the last node\n");
        printf("7. Delete a node from a specified position\n");
        printf("8. Count the number of nodes\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the data to be inserted: ");
                scanf("%d",&x);
                insert_front(x);
                break;
            case 2:
                printf("Enter the data to be inserted: ");
                scanf("%d",&x);
                insert_end(x);
                break;
            case 3:
                printf("Enter the data to be inserted: ");
                scanf("%d",&x);
                insert_order(x);
                break;
            case 4:
                display();
                break;
            case 5:
                delete_front();
                break;
            case 6:
                delete_end();
                break;
            case 7:
                printf("Enter the position of the node to be deleted: ");
                scanf("%d",&pos);
                delete_position(pos);
                break;
        }

    }
    

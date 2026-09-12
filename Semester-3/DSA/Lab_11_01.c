//  Write a menu driven program to implement following operations on the 
// Doubled Ended Queue using an Array 
// • Insert at front end, Insert at rear end 
// • Delete from front end, Delete from rear end 
// • Display all elements of the queue 

#include <stdio.h>
#define MAX 5

int F=-1, R=-1;
int DEQ[MAX];

void insert_rear(int y)
{
    if(R==MAX-1)
    {
        printf("queue overflow\n");
        return;
    }
    R++;
    DEQ[R]=y;
    if(F==-1)
    F=0;
}

int delete_FRONT()
{
    if(F==-1)
    {
        printf("queue underflow\n");
        return -1;
    }
    else{
        int x=DEQ[F];
        if(F==R)
        {
            F=-1;
            R=-1;
        }
        else
        {
            F++;
        }
        return x;
    }
}

void insert_FRONT(int y)
{
    if(F==0)
    {
        printf("queue overflow\n");
        return;
    }
    else
    {
        if(F==-1)
        {
            F=0;
            R=0;
        }
        else
        {
            F--;
        }
    }
    DEQ[F]=y;
}

int delete_rear()
{
    if(R==-1)
    {
        printf("queue underflow\n");
        return -1;
    }
    else
    {
        int x=DEQ[R];
        if(F==R)
        {
            F=-1;
            R=-1;
        }
        else
        {
            R--;
        }
        return x;
    }
}

void display()
{
    if(F==-1)
    {
        printf("queue is empty\n");
        return;
    }
    for(int i=F;i<=R;i++)
    {
        printf("%d ",DEQ[i]);
    }
    printf("\n");
} 

void main()
{
    insert_FRONT(10);
    insert_FRONT(20);
    insert_rear(20);
    printf("Elements in the queue are:");
    display();
}

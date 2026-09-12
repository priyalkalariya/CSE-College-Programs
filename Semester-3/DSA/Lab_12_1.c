// WAP to implement Priority Queue. (Ascending / Descending) 



 
#include <stdio.h>
#define N 5

struct PriorityQueue {
    int element;
    int priority;
};

struct PriorityQueue pq[N];
 int F=-1, R=-1;

void insert(int x, int y) {
    if (R == N - 1) {
        printf("Queue overflow\n");
        return;
    }
    R++;
    pq[R].element = x;
    pq[R].priority = y;

    if (F == -1) 
    
        F = 0;
    }

    void dequeue()
    {
        if (F == -1) {
            printf("Queue underflow\n");
            return;
        }
        else
        {
            if (F == R) {
             printf("element deleted: %d with priority: %d\n", pq[F].element, pq[F].priority);
                F = -1;
                R = -1;
            }
            else
            {
            //   int max_priority_index = F;
            //     for (int i = F + 1; i <= R; i++) {
            //         if (pq[i].priority > pq[max_priority_index].priority) {
            //             max_priority_index = i;
            //         }
            //     }
            //     printf("element deleted: %d with priority: %d\n", pq[max_priority_index].element, pq[max_priority_index].priority);
            //     for (int i = max_priority_index; i < R; i++) {
            //         pq[i] = pq[i + 1];
            //     }
            //     R--;
            int min_priority_index = F;
                for (int i = F + 1; i <= R; i++) {
                    if (pq[i].priority < pq[min_priority_index].priority) {
                        min_priority_index = i;
                    }
                }
                printf("element deleted: %d with priority: %d\n", pq[min_priority_index].element, pq[min_priority_index].priority);
                for (int i = min_priority_index; i < R; i++) {
                    pq[i] = pq[i + 1];
                }
                R--;
            }
        }
    }

    void display() {
        if (F == -1) {
            printf("Queue is empty\n");
            return;
        }
        printf("Priority Queue elements:\n");
        for (int i = F; i <= R; i++) {
            printf("Element: %d, Priority: %d\n", pq[i].element, pq[i].priority);
        }
    }
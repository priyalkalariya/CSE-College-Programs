// 27. Merge Intervals Problem 
// Given a set of time intervals in any order, our task is to merge all overlapping intervals 
// into one and output the result which should have only mutually exclusive intervals. 
 
// Sample Example-1: 
// Input: Intervals = {{1,3},{2,4},{6,8},{9,10}} 
// Output: {{1, 4}, {6, 8}, {9, 10}} 
// Explanation: Given intervals: [1,3],[2,4],[6,8],[9,10], we have only two overlapping 
// intervals here,[1,3] and [2,4]. Therefore we will merge these two and return [1,4],[6,8], 
// [9,10]

// #include <stdio.h>
// #define N 10

// struct element
// {
//     int start;
//     int end;
// };

// void main()
// {
//     struct element S[N], temp;
//     int i, j, n;
//     printf("Enter number of intervals: ");
//     scanf("%d", &n);

//     printf("\nEnter intervals:\n");
//     for(i = 0; i < n; i++)
//     {
//         scanf("%d %d", &S[i].start, &S[i].end);
//     }

//     for(i = 0; i < n - 1; i++)
//     {
//         for(j = 0; j < n - 1 - i; j++)
//         {
//             if(S[j].start > S[j + 1].start)
//             {
//                 temp = S[j];
//                 S[j] = S[j + 1];
//                 S[j + 1] = temp;
//             }
//         }
//     }

//     int start = S[0].start;
//     int end = S[0].end;

//     printf("\nMerged intervals:\n");

//     for(i = 1; i < n; i++)
//     {
//         if(S[i].start <= end)
//         {
//             if(S[i].end > end)
//             {
//                 end = S[i].end;
//             }
//         }
//         else
//         {
//             printf("[%d %d]\n", start, end);
//             start = S[i].start;
//             end = S[i].end;
//         }
//     }

//     printf("{%d %d}\n", start, end);
// }


#include <stdio.h>
#define N 10

struct element
{
    int start;
    int end;
};

struct element stack[N];
int top = -1;

void push(struct element x)
{
    top++;
    stack[top] = x;
}

struct element pop()
{
    return stack[top--];
}

int main()
{
    struct element S[N], temp, x;
    int i, j, n;

    printf("Enter number of intervals: ");
    scanf("%d", &n);

    printf("Enter intervals:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &S[i].start, &S[i].end);
    }

  
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(S[j].start > S[j + 1].start)
            {
                temp = S[j];
                S[j] = S[j + 1];
                S[j + 1] = temp;
            }
        }
    }

    
    push(S[0]);


    for(i = 1; i < n; i++)
    {
        x = pop();

        if(S[i].start <= x.end)
        {
            if(S[i].end > x.end)
                x.end = S[i].end;

            push(x);
        }
        else
        {
            push(x);
            push(S[i]);
        }
    }

    printf("\nMerged intervals:\n");

  
    for(i = 0; i <= top; i++)
    {
        printf("{%d %d}\n", stack[i].start, stack[i].end);
    }

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#define size 5
int front=-1,rear=-1,q[size];
int main()
{
    int n;
    while(1)
    {
        printf("Choose any one \n1 for enque \n2 for deque \n3 for display\n");
        scanf("%d",&n);
        switch (n)
        {
            case 1:
            {
                enque();
                break;
            }
            case 2:
            {
                deque();
                break;
            }
            case 3:
            {
                display();
                break;
            }
        }
    }
}

void enque()
{
    int a;
    if(rear==size-1)
    {
        printf("Queue is overflown");
    }
    else if(front ==-1)
    {
        front =0;
    }
    printf("Enter no:");
    scanf("%d",&a);
    rear++;
    q[rear]=a;
}

void deque()
{
    if(rear==-1)
    {
        printf("Queue is underflown");
    }
    else if(rear==front)
    {
        printf("Queue is empty");
    }
    else
    {
        front++;
    }
}

void display()
{
    if(front == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d->",q[i]);
        }
    }
}
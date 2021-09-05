//  circular queue

#include<stdio.h>

int queue[5];
int rear=-1;
int front=-1;
int api_select,i;

void add_to_queue ();
void remove_from_queue ();
void print ();

int main ()
{
    printf("Operations are as follows-");
    printf("\n1)ADD_TO_QUEUE\n2)REMOVE_FROM_QUEUE\n3)PRINT\n4)EXIT");
    
    do
    {
        
        
    printf("\nEnter your choice-");
    scanf("%d",&api_select);
    
    switch(api_select)
        {
            case 1:
            {
                add_to_queue ();
                break;
            }
            case 2:
            {
                remove_from_queue ();
                break;
            }
            case 3:
            {
                print ();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT");
                break;
            }
            
        }
    }while (api_select<4);
    
    return 0;
   
}


void add_to_queue()
{
    if ((front == rear + 1) || (front == 0 && rear == 4))
    printf("\nQueue Overflow");
    else
    {
        if (front == -1)
        front = 0;
        rear = (rear+1)%5;
        printf("\nEnter the element--- ");
        scanf("%d", &queue[rear]);
      
    }
}

void remove_from_queue ()
{
    if (front == -1)
    {
        printf("Queue is empty ");
    }
    else if (front == rear)
    {
        printf("\ndeleted element is--%d", queue[front]);
        front =  - 1;
        rear =  - 1;
    }
    else
    {
        printf("\n deleted element is--%d", queue[front]);
        front++;
    }
}

void print ()
{
    if(front==-1)
    {
        printf("\nQueue is empty");
    }
    
    else
    {
    
    printf("\nEntered elements are---");
      
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            printf("\n%d ",queue[i]);
    }
    else
    {
        for (int i = front; i < 5; i++)
            printf("\n%d ", queue[i]);
 
        for (int i = 0; i <= rear; i++)
            printf("\n%d ", queue[i]);
    }

      
    }
}
 

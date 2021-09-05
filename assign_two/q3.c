// Full Ascending Stack

#include<stdio.h>
int stack[5];
int top,i;
int api_select;

void push();
void pop();
void print();

int main ()
{
    top=-1;
    printf("Operations are as follows-");
    printf("\n1)push\n2)pop\n3)print\n4)exit");
    
    do
    {
        
        
    printf("\nEnter your choice-");
    scanf("%d",&api_select);
    
    switch(api_select)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                print();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            
        }
    }while (api_select<4);
    
    return 0;
   
}

void push ()
{
    if(top==4)
    printf("\nstack is overflow");
    else
    {
        printf("\nEnter the value to be pushed- ");
        scanf("%d",&stack[++top]);
    }
}

void pop ()
{
    if(top==-1)
    printf("\nstack is underflow");
    else
    {
        
        printf("\nThe poped element is---%d",stack[top]);
        --top;
        
    }
}

void print ()
{
    if(top==-1)
    printf("\nstack is empty");
    else
    {   
        printf("\nThe elements of the stack are--");
        for(i=0;i<=4;++i)
        printf("\n%d",stack[i]);
    }
}

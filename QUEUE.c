#include <stdio.h>
#define size 100

struct que
{
    int a[size];
    int front;
    int rear;
};
struct que q;

void insert(int data);
void delete();
void display();

int main()
{
    int ch=99,data;
    q.front=-1;
    q.rear=-1;
    while(ch!=0)
    {
        printf("\n1.pushing \n2.popping \n3.display \n0.exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("enter the value to insert\n");
                    scanf("%d",&data);
                    insert(data);
                    display();
                    break;
            case 2: delete();
                    display();
                    break;
            case 3: display();
                    break;
        }

    }
    return(0);
}
void insert(int data)
{
    if(q.rear==size-1)
        printf("Queue is full/n");
    else if(q.rear==-1)
    {
        q.front=0;
        q.rear=0;
        q.a[q.rear]=data;
    }
    else
    {
        ++q.rear;
        q.a[q.rear]=data;
    }
}
void delete()
{
    int temp;
    if(q.front==-1)
        printf("Queue is empty\n");
    else
        temp=q.a[q.front];

    if(q.front==q.rear)
    {
        q.front=-1;
        q.rear=-1;
    }
    else
        q.front++;
        printf("Deleted value is %d",temp);
}
void display()
{
    if(q.front==-1)
        printf("Queue is empty\n");
    else
    {
        int i;
        printf("Queue is\n");
        for(i=q.rear;i>=q.front;i--)
            printf(" %d \t",q.a[i]);
    }
}

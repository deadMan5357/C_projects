#include<stdio.h>
#define size 100

struct stack
{
    int a[size];
    int top;
};
struct stack s;

void push();
void pop();
void display();
void isempty();
void isfull();

int main()
{
    int ch=99;
    s.top=-1;
    while(ch!=0)
    {
        printf("\n1.pushing \n2.popping \n3.display \n0.exit \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: isfull();
                    push();
                    display();
                    break;
            case 2: isempty();
                    pop();
                    display();
                    break;
            case 3: display();
                    break;
        }
    }
    return(0);
}
void isfull()
{
    if(s.top==size-1)
        printf("insertion cannot be done\n");
}
void isempty()
{
    if(s.top==-1)
        printf("deletion not possible\n");
}
void push()
{
    int a;
    if(s.top==size-1)
        printf("Stack is full\n");
    else
    {
        printf("enter the number to be pushed\n");
        scanf("%d",&a);
        s.top=s.top+1;
        s.a[s.top] = a;
    }
    return;
}
void pop()
{
    int a;
    a=s.a[s.top];
    printf("popped element is %d\n",a);
    s.top=s.top-1;
    return;
}
void display()
{
    int i;
    if(s.top==-1)
        printf("stack is empty\n");
    else
    {
     printf("stack elements are\n");
     for(i=s.top;i>=0;i--)
        printf("%d\t",s.a[i]);
    }
}

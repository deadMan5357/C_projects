#include<stdio.h>
#define size 100
struct list
{
    int a[size];
    int ls;
};
struct list l;
void insert(int data,int pos);
void print();
void delete(int pos);
void isempty();
void isfull();
int main()
{
    int pos,ch,data,n,i,ls;
    l.ls=0;
    while(ch!=0)
    {
        printf("\n1.insert \n2.delete \n3.print\n");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1: printf("enter the no u want to insert & its position\n");
                  scanf("%d%d",&data,&pos);
                  isempty();
                  insert(data,pos);
                  print();
                  break;
          case 2: printf("enter position\n");
                  scanf("%d",&pos);
                  isfull();
                  delete(pos);
                  print();
                  break;
          case 3: print();
        }
    }
    return(0);
}
void insert(int data,int pos)
{
    int i;
    for(i=l.ls;i>=pos;i--)
        l.a[i]=l.a[i-1];

    l.a[pos-1]=data;
    l.ls=l.ls+1;
}

void print()
{
    int i;
    printf("the final array is\n");
    for(i=0;i<=l.ls-1;i++)
        printf("%d\t",l.a[i]);
}

void delete(int pos)
{
    int i;
    for(i=pos-1;i<l.ls-1;i++)
        l.a[i]=l.a[i+1];
    l.ls=l.ls-1;
}

void isempty()
{
    if(l.ls==size)
        printf("insertion not possible\n");
}

void isfull()
{
    if(l.ls==0)
        printf("deletion not possible\n");
}

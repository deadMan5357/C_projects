#include<stdio.h>
#include<string.h>
struct bank
{
    int acc;
    float bal;
    char name[20];
};
struct bank c[20];
int n;

void read();
void print();
void search();
void credit();
void debit();

int main()
{
    int ch = 99;
    while(ch!=0)
    {
        printf("Select an option\n");
        printf("\n1.read \n2.print \n3.search \n4.credit \n5.debit \n0.exit");
        scanf("%d",&ch);

          switch(ch)
          {
            case 1: read();
                    break;
            case 2: print();
                    break;
            case 3: search();
                    break;
            case 4: credit();
                    break;
            case 5: debit();
                    break;
            default : printf("Exit\n");
          }
    }
    return(0);
}
void read()
{
    int i;
    printf("Enter no of entries you want to enter\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter the account no.\n");
        scanf("%d",&c[i].acc);
        printf("Enter the balance\n");
        scanf("%f",&c[i].bal);
        printf("Enter the name\n");
        getchar();
        gets(c[i].name);
    }
}
void print()
{
    int i;
    printf("the details are\n");
    printf("Acc no\t Bal\t Name\t\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t %f\t \n",c[i].acc,c[i].bal);
        puts(c[i].name);
    }
}
void search()
{
    int ac,i,flag=0;
    printf("Enter the acc no u want to search for\n");
    scanf("%d",&ac);
    for(i=0;i<n;i++)
    {
        if(c[i].acc==ac)
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
        printf("Acc no could not be found\n");
    else
    {
        printf("the details are \n");
        printf("%d\t %f\t ",c[i].acc,c[i].bal);
        puts(c[i].name);
    }
}
void credit()
{
    int p,ac,i,flag=0;
    float cr;
    printf("Enter the account number u want to credit for\n");
    scanf("%d",&ac);

    for(i=0;i<n;i++)
    {
        if(c[i].acc==ac)
        {
            flag=1;
            printf("Enter the amount to be credited\n");
            scanf("%f",&cr);
            c[i].bal+=cr;
            break;
        }

    }
    if(flag==0)
        printf("Acc no not found\n");
    else
    {
        printf("The new details are\n");
        printf("%d\t %f\t ",c[i].acc,c[i].bal);
        puts(c[i].name);
    }
}
void debit()
{
    int ac,i,flag=0;
    float de;
    printf("Enter the account number u want to debit from\n");
    scanf("%d",&ac);

    for(i=0;i<n;i++)
    {
        if(c[i].acc==ac)
        {
            flag=1;
            printf("Enter the amount to be debited\n");
            scanf("%f",&de);
            if(de>500&&de<c[i].bal)
            {
                flag=1;
                c[i].bal-=de;
                break;
            }
            else
                printf("Cannot be debited\n");
                break;
        }
    }
    if(flag==0)
        printf("Acc no not found\n");
    else
    {
        printf("The new details are\n");
        printf("%d\t %f\t ",c[i].acc,c[i].bal);
        puts(c[i].name);
    }
}

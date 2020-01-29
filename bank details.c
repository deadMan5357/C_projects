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
int ch=99;
while(ch!=0)
{
printf("select an option\n");
printf("1.read\n 2.print\n 3.search\n 4.credit \n 5.debit\n");
scanf("%d",&ch);

switch(ch)
{

case 1:
      read();
      break;
case 2:
      print();
      break;
case 4:
      credit();
      break;
case 5:
      debit();
      break;
case 3:
      search();
      break;
default : printf("exit\n");
}
}
return(0);
}

void read()
{
int i;
printf("enter number of entries you want to enter\n");
scanf("%d",&n);


for(i=0;i<n;i++)
{
printf("enter acc num\n");
scanf("%d",&c[i].acc);
printf("enter balance\n");
scanf("%f",&c[i].bal);
printf("enter the name\n");
scanf("%s",&c[i].name);
}
}

void print()
{
int i;
printf("the details are\n");
printf("acc no\t bal\t name\n");
for(i=0;i<n;i++)
{
printf("%d\t   %f\t  %s\n",c[i].acc,c[i].bal,c[i].name);
}
}

void search()
{
int ac,i,flag=0;
printf("enter acc number you want to search\n");
scanf("%d",&ac);
for(i=0;i<n;i++)
{
if(c[i].acc==ac)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("acc could not be found\n");
}
else
{
printf("the deatils are\n");
printf("%d\t %f\t %s\n",c[i].acc,c[i].bal,c[i].name);
}}

void credit()
{
int p,ac,i,flag=0;
float cr;
printf("enter account number you want to enter\n");
scanf("%d",&ac);

for(i=0;i<n;i++)
{
if(c[i].acc==ac)
{
flag=1;
printf("enter the amount you want to credit\n");
scanf("%f",&cr);
c[i].bal=c[i].bal+cr;
break;
}
}
if(flag==0)
printf("the acc is not found\n");
else
{
printf("the new details are\n");
printf("%d\t %f\t %s\n",c[i].acc,c[i].bal,c[i].name);
}}

void debit()
{
int p,ac,i,flag=0;
float de;
printf("enter account number you want to enter\n");
scanf("%d",&ac);

for(i=0;i<n;i++)
{
if(c[i].acc==ac)
{
flag=1;
printf("enter the amount you want to debit\n");
scanf("%f",&de);
if(de>100 && de<c[i].bal)
{
flag=1;
c[i].bal=c[i].bal-de;
break;
}
else
printf("cannot be debited\n");
break;
}
if(flag==0)
printf("the acc is not found\n");
else
{
printf("the new details are\n");
printf("%d\t %f\t %s\n",c[i].acc,c[i].bal,c[i].name);
}}


}




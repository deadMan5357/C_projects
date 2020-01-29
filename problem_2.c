// To implement union opertaions on sets
#include <stdio.h>
struct sets
{
 int value;
 struct sets * next;
};
typedef struct sets list;
typedef list*listptr;
void insert(listptr*sptr,int e)
{
 listptr newptr;
 listptr previousptr;
 listptr currentptr;
 newptr=malloc(sizeof(struct sets));
 if(newptr!=NULL)
 {
     newptr->value=e;
     newptr->next=NULL;
     previousptr=NULL;
     currentptr=*sptr;
    while(currentptr!=NULL)
    {
        previousptr=currentptr;
        currentptr=currentptr->next;
    }
if(previousptr==NULL)
{
    newptr->next=NULL;
    *sptr=newptr;

}
else
{
    previousptr->next=newptr;
    newptr->next=NULL;

}
 }
}
void print(listptr currentptr)
{
    while(currentptr!=NULL)
    {
        printf("%d",currentptr->value);
        currentptr=currentptr->next;
    }
}
void uni(listptr cstr1, listptr cstr2)
{
    listptr startptr=NULL;
    listptr newptr = NULL;
    listptr ctr = cstr1;
    while(ctr != NULL)
    {
        insert(&startptr,ctr->value);
        ctr = ctr->next;
    }

    ctr = cstr2;
    listptr cctr=cstr1;
    while(ctr != NULL)
    {
        while(cctr != NULL)
        {
            if(cctr->value == ctr->value)
             {break;}
            cctr=cctr->next;
        }
        if(cctr==NULL)
         insert(&startptr,ctr->value);
        cctr=cstr1;
        ctr=ctr->next;
    }
    print(startptr);

}
int main()
{
 listptr startptr1= NULL;
 listptr startptr2= NULL;
 char op='y';
 int ch;
  int e;
 while(op=='y')
 {
   printf("\nMenu:\n1.Insert s1\n2.Insert s2\n3.print\n4.union\n5.exit\n");
   printf("Enter option:");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:{printf("Value?");scanf("%d",&e);insert(&startptr1,e);break;}
    case 2:{printf("Value?");scanf("%d",&e);insert(&startptr2,e);break;}
    case 3:{print(startptr1);print(startptr2);break;}
    case 4:{uni(startptr1,startptr2);break;}
    default:{return(0);}
   }
 }

     return 0;
}


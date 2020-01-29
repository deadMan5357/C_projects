//INSERTION SORT
#include <stdio.h>
int main()
{
   int i,j,n,temp,count=0;

   printf("enter the size of the array\n");
   scanf("%d",&n);
   int a[n];

   printf("Enter the no's into the array\n");
   for(i=0;i<=n-1;i++)
   scanf("%d",&a[i]);

   for(i=1;i<=n-1;i++)
    for(j=i;j>0;j--)
   {
       if(a[j]<a[j-1])
       {
           count++;
           temp = a[j];
           a[j] = a[j-1];
           a[j-1] =temp;
       }
       else
       {
        count++;
        break;
       }
   }
   printf("the array in sorted order is \n");
    for(i=0;i<=n-1;i++)
        printf("%d",a[i]);
  return(0);
}

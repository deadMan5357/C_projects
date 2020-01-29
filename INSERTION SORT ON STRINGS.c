//INSERTION SORT ON STRINGS
#include <stdio.h>
#include <string.h>
int main()
{
   int i,j,n,count=0;

   printf("enter the size of the array\n");
   scanf("%d",&n);
   char a[n][10],temp[20][100];
   n=n+1;
   printf("Enter the words into the array\n");
   for(i=0;i<=n-1;i++)
   gets(a[i]);

   for(i=1;i<=n-1;i++)
    for(j=i;j>0;j--)
   {
       if(strcmp(a[j],a[j-1])<0)
       {
           count++;
           strcpy(temp,a[j]);
           strcpy(a[j],a[j-1]);
           strcpy(a[j-1],temp);
       }
       else
       {
        count++;
        break;
       }
   }
   printf("the array in sorted order is \n");
    for(i=0;i<=n-1;i++)
        puts(a[i]);
  return(0);
}

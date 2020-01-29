#include <stdio.h>

int main()
{
   int i,n,x,rev=0;

   printf("enter the no of digits\n");
   scanf("%d",&x);

   printf("enter the number\n");
   scanf("%d",&n);

   for(i=0;i<x;i++)
   {
       rev = rev*10 + n%10;
       n = n/10;
   }
  printf("the reversed number is %d",rev);
}

//BUBBLE SORT
#include <stdio.h>

int main()
{
  int i,j,n;

  printf("enter the size of the array\n");
  scanf("%d",&n);

  char a[n],temp;

  printf("enter the characters into the array\n");
    for(i=0;i<=n-1;i++)
    scanf(" %c",&a[i]);

  for(i=0;i<=n-2;i++)
    for(j=0;j<=n-i-1;j++)
  {
      if(a[j]>a[j+1])
      {
          temp = a[j];
          a[j] = a[j+1];
          a[j+1] = temp;
      }
  }

  printf("the array in sorted order is \n");

    for(i=0;i<=n-1;i++)
      printf("%c",a[i]);

   return(0);
}

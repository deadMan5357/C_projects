#include <stdio.h>

int main()
{
  int n,i,count=0;
  printf("enter the no of characters\n");
  scanf("%d",&n);

  char a[n],x;

  printf("enter the characters\n");
  for(i=0;i<n;i++)
    scanf(" %c",&a[i]);

  printf("Enter the character to search\n");
  scanf(" %c",&x);

  for(i=0;i<n;i++)
  {
      if(a[i]==x)
      {
          count++;
      }
  }
    printf("the frequency of %c is %d",x,count);

  return(0);


}

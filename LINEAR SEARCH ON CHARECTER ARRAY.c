#include <stdio.h>

int main()
{
  int n,i;
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
          printf("\n found \n");
          break;
      }
  }
  if(i==n)
    printf("\n not found \n");

  return(0);
}

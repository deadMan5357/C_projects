#include <stdio.h>

int main()
{
  int n,x,y,lar,sml,i;

  printf("enter the no of integers\n");
  scanf("%d",&n);

  printf("enter the first number\n");
  scanf("%d",&x);

  lar = x;
  sml = x;

  for(i=0;i<n-1;i++)
  {
      printf("enter next number\n");
      scanf("%d",&y);

      if(y>lar)
        lar = y;

      else if(y<sml)
        sml = y;
  }
    printf("the largest & smallest numbers are %d & %d\n",lar,sml);
  return(0);

}

#include <stdio.h>

int main()
{
  int i,n,r,A=1,B=1,C=1,X;

  printf("enter the value of N and R\n");
  scanf("%d%d",&n,&r);

  for(i=1;i<=n;i++)
        A = A*i;
  for(i=1;i<=r;i++)
        B = B*i;
  for(i=1;1<=n-r;i++)
        C = C*i;

  X = A/(B*C);

  printf("The result is %d",X);

  return(0);

}

// NO OF PRIMES
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j,m,n,count=0;

  printf("enter the maximum integer\n");
  scanf("%d",&n);

  for(i=2;i<=n;i++)
  {
    for(j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {
            count = count + 1;
            break;
        }
    }
  }

  printf("the no of prime numbers are %d",n-count-1);

  return(0);
}

#include <stdio.h>

int main()
{
    int i,n,p,x,sum=0;
    printf("How many digits\n");
    scanf("%d",&p);
    printf("enter the integer\n");
    scanf("%d",&n);

    while(n!=0)
    {
        x = n%10;
        sum = sum + x;
        n = n/10;
    }
  printf("the sum of the digits is %d",sum);

  return(0);
}

//DIVISION OF TWO NUMBERS
#include <stdio.h>
int div(int a,int b);
int main()
{
  int a,b,divi;

  printf("enter the numbers to divide\n");
  scanf("%d%d",&a,&b);

  divi = div(a,b);

  printf("The division of a & b is %d",divi);

  return(0);
}
int div(int a,int b)
{
    if(b==0)
      return 0;
    else if(a-b==0)
      return 1;
    else if(a<b)
      return 0;
    else
      return (1+div(a-b,b));
}

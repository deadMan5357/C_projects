#include <stdio.h>

int main()
{
  int n,y,sum=0,i;
  float avg;

  printf("enter the no of numbers u want to find average for\n");
  scanf("%d",&n);

  printf("Enter the numbers\n");

  for(i=0;i<n;i++)
  {
      scanf("%d",&y);
      sum = sum + y;
  }
  avg = sum/n;
  printf("the avg of given numbers is %f\n",avg);

  return(0);
}

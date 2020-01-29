#include <stdio.h>
int mult(int x,int y);

int main()
{
  int a,b,M;

  printf("enter the numbers to be multiplied\n");
  scanf("%d%d",&a,&b);

  M = mult(a,b);

  printf("the result is %d\n",M);

 return(0);
}
 int mult(int x,int y)
 {
     if(y==1)
        return x;
     else
        return (mult(x,y-1)+x);
 }

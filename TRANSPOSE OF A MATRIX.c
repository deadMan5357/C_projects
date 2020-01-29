#include <stdio.h>
void transpose(int a[][10],int b,int c);

int main()
{
 int r,d,i,j;

   printf("enter the size of the matrix\n");
   scanf("%d%d",&r,&d);

int b[r][d];

  printf("Enter the first matrix of %d X %d ",r,d);
        for(i=0;i<r;++i)
        for(j=0;j<d;++j)
            scanf("%d",&b[i][j]);
   transpose(b,r,d);

return(0);
}
void transpose(int a[][10],int b,int c)
{
    int trans[10][10],i,j;
    for(i=0;i<b;i++)
        for(j=0;j<c;j++)
    {
        trans[j][i] = a[i][j];
    }
  printf("New matrix is\n");
  for(i=0;i<c;i++)
  {
    printf("\n");
    for(j=0;j<b;j++)
     printf("%d \t",trans[i][j]);
  }
}

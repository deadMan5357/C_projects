//BUBBLE SORT ON STRINGS
#include <stdio.h>
#include <string.h>

int main()
{
  int i,j,n;

  printf("enter the size of the array\n");
  scanf("%d",&n);

  char a[n][10],temp[20][100];
  n=n+1;
  printf("enter the words into the array\n");
    for(i=0;i<=n-1;i++)
    gets(a[i]);

  for(i=0;i<=n-2;i++)
    for(j=0;j<=n-i-1;j++)
      if(strcmp(a[j],a[j+1])>0)
      {
          strcpy(temp,a[j]);
          strcpy(a[j],a[j+1]);
          strcpy(a[j+1],temp);
      }
printf("the array in sorted order is \n");

    for(i=0;i<=n-1;i++)
      puts(a[i]);

   return(0);
}


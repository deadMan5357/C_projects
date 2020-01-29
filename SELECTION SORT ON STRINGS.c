//SELECTION SORT STRINGS
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,n,pmax,count=0;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    char a[n][10],temp[20][100],max1[10][10];
    n=n+1;
    printf("enter the elements into the array\n");
      for(i=0;i<=n-1;i++)
        gets(a[i]);
    for(i=0;i<=n-2;i++)
    {
        strcpy(max1,a[0]);
        pmax = 0;
        for(j=1;j<=n-i-1;j++)
        {
            if(strcmp(max1,a[j])<0)
        {
            count++;
            strcpy(max1,a[j]);
            pmax = j;
        }
            else
            count++;
        }
       strcpy(temp,a[pmax]);
       strcpy(a[pmax],a[n-i-1]);
       strcpy(a[n-i-1],temp);
    }
  printf("The sorted array is\n");
    for(i=0;i<n;i++)
        puts(a[i]);
    printf("the no of comparisons are %d",count);
    return(0);
}

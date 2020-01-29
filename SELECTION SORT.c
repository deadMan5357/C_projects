//SELECTION SORT
#include <stdio.h>
int main()
{
    int i,j,n,temp,pmax,max1,count=0;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements into the array\n");
      for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=n-2;i++)
    {
        max1 = a[0];
        pmax = 0;
        for(j=1;j<=n-i-1;j++)
        {
            if(max1<a[j])
        {
            count++;
            max1 = a[j];
            pmax = j;
        }
            else
            count++;
        }
       temp = a[pmax];
       a[pmax] = a[n-i-1];
       a[n-i-1] = temp;
    }
  printf("The sorted array is\n");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    printf("the no of comparisons are %d",count);
    return(0);
}

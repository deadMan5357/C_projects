#include <stdio.h>

int main()
{
    int c,last,mid,first,n,x,a[100],i;

    printf("enter no of elements\n");
    scanf("%d",&n);

    printf("enter the integers\n");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);

    printf("enter the value to find\n");
      scanf("%d",&x);

    first = 0;
    last = n-1;
    mid = (first + last)/2;
    while(first<=last)
    {
        if(a[mid]==x)
        {
            printf("found\n");
            break;
        }
        else if(a[mid]<x)

            first = mid + 1;

        else
        {
            last = mid + 1;
            mid = (first+last)/2;
        }
    }
        if(first>last)

            printf("not found\n");

      return(0);

}

//SUMOF ARRAY USING RECURSION
#include <stdio.h>
int arsum(int n,int a[]);
int sum=0;
int main()
{
    int n,i,sum;

    printf("enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements into array\n");
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);

    sum = arsum(n-1,a);

    printf("The sum of elements is %d",sum);

    return(0);
}
int arsum(int n,int a[])
{
    if(n<0)
        return 0;
    else
        return a[n] + arsum(n--,a);
        
}

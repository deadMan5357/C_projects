//NCR USING RECURSION
#include <stdio.h>
int ncr(int n,int r);

int main()
{
    int n,r,NcR;

    printf("Enter the values of n,r\n");
    scanf("%d%d",&n,&r);

    NcR = ncr(n,r);

    printf("NcR of %d & %d is %d",n,r,NcR);

    return(0);
}
int ncr(int n,int r)
{
    if(n==r||r==0)
        return 1;
    else if(r==1)
        return n;
    else
        return (ncr(n-1,r))+(ncr(n-1,r-1));
}

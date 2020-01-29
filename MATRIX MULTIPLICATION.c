#include <stdio.h>

int main()
{

    int i,j,k,m,n,p,q,sum=0;

    printf("enter the size of first matrix\n");
    scanf("%d%d",&m,&n);

    printf("\n Enter the size of the second matrix");
    scanf("%d%d",&p,&q);

    int a[m][n],b[p][q];
    int c[m][q];
    if(p!=n)
    {

        printf("\n The matrix cannot be multiplied");
        return(0);

    }
    else
        {
        printf("\n Enter the first matrix of %d X %d ",m,n);
        for(i=0;i<m;++i)
        for(j=0;j<n;++j)
            scanf("%d",&a[i][j]);

        printf("Enter the second matrix of %d x %d",p,q);
        for(i=0;i<p;++i)
            for(j=0;j<q;++j)
            scanf("%d",&b[i][j]);

            for(i=0;i<m;++i)
                for(j=0;j<q;++j)
            {

                sum = 0;
                for(k=0;k<n;++k)
                    sum = sum + a[i][k]*b[k][j];
                    c[i][j] = sum;
            }
            printf("\n matrix A X B = C\n");
            for(i=0;i<m;++i)
            {
                for(j=0;j<q;++j)
                    printf("%d",c[i][j]);
                printf("\n");

            }
            return(0);
    }
}













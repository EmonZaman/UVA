#include<stdio.h>
int main()
{
    int a[100001],i,j,k,l,m,n,sum,max;
    while(scanf("%d", &n)==1)
    {
        sum=0;
        max=0;
        if(n==0)
        {
            return 0;
        }
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
        for(j=0;j<n;j++)
        {
            sum=sum+a[j];
            if(sum<0)
            {
                sum=0;
            }
             if(sum > max)
             {
                max = sum;
             }

        }
        if(max>0)
        {
            printf("The maximum winning streak is %d.\n",max);

        }
        else
        {
            printf("Losing streak.\n");
        }

    }
    return 0;
}

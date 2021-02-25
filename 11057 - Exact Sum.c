#include<stdio.h>
int main()
{
    int a[10002],i,j,k,n,check,temp,p,q;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&check);
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]+a[j]==check)
                {
                    p=a[i];
                    q=a[j];
                }
            }
        }
         printf("Peter should buy books whose prices are %d and %d.\n",p,q);
         printf("\n");

    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a[10000],i,j,k,l=1,count,n,sum,ave;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }

        sum=0;
        count=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }

        ave=sum/n;

        for(j=0;j<n;j++)
        {
            if(a[j]<ave)
            {
                k=a[j];
                while(k!=ave)
                {
                    count=count+1;
                    k++;
                }
            }
        }
        printf("Set #%d\n",l);
        printf("The minimum number of moves is %d.\n\n",count);
        l++;
    }
    return 0;
}

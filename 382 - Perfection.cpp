#include<stdio.h>

int main()
{
    int i,sum,k,n;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        sum=0;
        k=n/2;
        for(i=1; i<=k; i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum<n)
        {

            printf("%5d  DEFICIENT\n",n);
        }
        else if(sum>n)
        {
            printf("%5d  ABUNDANT\n",n);
        }
        else if(sum==n)
        {
            printf("%5d  PERFECT\n",n);
        }


    }
    printf("END OF OUTPUT\n");
    return 0;

}

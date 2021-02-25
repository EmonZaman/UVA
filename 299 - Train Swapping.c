#include<stdio.h>
int main()
{
    int a[10001];
    int i,j,k,l,m,n,temp,count=0;
    scanf("%d",&m);
    while(m>0)
    {
        scanf("%d",&n);

        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0; j<n; j++)
        {
            for(k=j+1; k<n; k++)
            {
                if(a[j]>a[k])
                {
                    count=count+1;
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
        count=0;
        m--;
    }

    return 0;
}


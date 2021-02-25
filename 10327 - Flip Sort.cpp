#include<stdio.h>
int main()
{
    int a[1001],i,j,k,temp,n,count;
    while(scanf("%d",&n)==1)
    {
        count=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[j]>a[k])
                {

                    count=count+1;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",count);
    }
    return 0;

}

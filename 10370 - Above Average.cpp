#include<stdio.h>
int main()
{
    int a[101],i,j,k,l,count,t,n,sum,ave;
    float ans;
    scanf("%d",&t);
    while(t>0)
    {
        sum=0;
        count=0;
        scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
            sum=sum+a[i];
        }
        ave=sum/n;
        for(j=0;j<n;j++)
        {
            if(a[j]>ave)
            {
                count=count+1;
            }
        }
        ans=((float)count*100)/(float)n;

        printf("%0.3f%%\n",ans);
        t--;
    }
    return 0;

}

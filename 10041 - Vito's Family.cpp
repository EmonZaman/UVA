#include<stdio.h>
int main()
{
    int a[10001],i,j,k,t,n,temp,l,m,d1,d2,sum1=0,sum2=0,p,ans;
    scanf("%d",&t);
    while(t>0)
    {
        sum1=0;
        sum2=0;
        scanf("%d",&n);
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
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
            }
        }
        l=n/2;


        for(m=l-1;m>=0;m--)
        {

           d1=a[l]-a[m];
          sum1=sum1+d1;


        }
        for(p=l+1;p<n;p++)
        {
            d2=a[p]-a[l];
           sum2=sum2+d2;


        }
        ans=sum1+sum2;
          printf("%d\n",ans);
          t--;

}
 return 0;
}

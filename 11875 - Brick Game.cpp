#include<stdio.h>
int main()
{
    int a[10001],i,j,k,t,n,temp,l,m=0;
    scanf("%d",&t);
    while(t>0)
    {
        m++;
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
        printf("Case %d: %d\n",m,a[l]);

        t--;
}
return 0;
}

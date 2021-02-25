#include<stdio.h>
int main()
{
    int a[1001],i,j,k,l,t,c=0,count1,count2,n;
    scanf("%d",&t);
    while(t>0)
    {
        count1=0;
        count2=0;
        c++;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0; j<n-1; j++)
        {
            for(k=j+1; k<=j+1; k++)
            {

                if(a[j]>a[k])
                {
                    count1=count1+1;

                }
                if(a[j]<a[k])
                {
                    count2=count2+1;

                }
            }
        }
        printf("Case %d: %d %d\n",c,count2,count1);
        t--;
    }
    return 0;

}

#include<stdio.h>
int main()
{
    int a[100];
    int i,j,n,p,q,ans,count,t,c1=0,temp,k;
    scanf("%d",&t);
    while(t>0)
    {
        count=0;
        ans=0;
        c1=c1+1;

        scanf("%d %d %d",&n,&p,&q);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0;j<n;j++)
        {
            for(k=j;k<n;k++)
            {
                if(a[j]>a[k])
                {
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }

            }
        }
        for(j=0; j<n; j++)

        {
            ------


            if(a[j]<=q)
            {
                ans=ans+a[j];



                if(ans>q)
                {
                    break;
                }


               count=count+1;


            }
            if(p==count)
            {
                break;
            }


        }
        printf("Case %d: %d\n",c1,count);
        t--;
    }
    return 0;
}

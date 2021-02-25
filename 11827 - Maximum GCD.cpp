
#include<stdio.h>
int main()
{
    int a[1000],i,j,k,n1,n2,r,len=-1,t,m;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d",&m);
        len=-1;

        for(i=0; i<m; i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0; j<m; j++)
        {
            for(k=j+1; k<m; k++)
            {
                n1=a[j];

                n2=a[k];

                while(n2!=0)
                {
                    r=n1%n2;
                    n1=n2;
                    n2=r;
                }

                if(n1>len)
                {
                    len=n1;
                }
            }


        }
        printf("ans=%d\n",len);
        t--;
    }

    return 0;

}

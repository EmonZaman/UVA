#include<bits/stdc++.h>
using namespace std;
int i,j,k,l,n;
bool marked[100000];
int sieve()
{
    for(i=2;i*i<=100000;i++)
    {
        if(marked[i]==false)
        {
            for(j=i*i;j<=100000;j=j+i)
            {
                marked[j]=true;
            }
        }
    }

}
int main()
{
    int k,n,l,c,x,same,ans;
    sieve();
    while(scanf("%d",&n)==1)
    {
        c=0;
        same =0;
        if(n==0)
        {
            break;
        }
        for(k=2;k<=n;k++)
        {
            if(marked[k]==false)
            {
                for(l=2;l<=n;l++)
                {
                    if(k+l==n && marked[l]==false && k==l)
                    {
                        same=same+1;

                    }
                    else if(k+l==n && marked[l]==false)
                    {
                        c=c+1;

                    }
                }
            }
        }
        ans=(c/2)+same;


        printf("%d\n",ans);

    }
    return 0;
}




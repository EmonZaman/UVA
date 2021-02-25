#include<bits/stdc++.h>
using namespace std;
int i,j,k,l,p,diff,ans1,ans2,sum,temp,n,ck;
 bool marked[1000003];
void sieve()
{

    p=0;
    for(i=2;i*i<=1000000;i++)
    {
        if(marked[i]==false)
        {
            for(j=i*i;j<=1000000;j=j+i)
            {
                marked[j]=true;
            }
        }
    }


}
int main()
{
    int n;
    sieve();
    while(scanf("%d",&n)==1)
    {
        ck=0;

        if(n==0)
        {
            break;
        }


        for(j=n-1;j>=2;j--)
        {
            if(marked[j]==false)
            {
                for(l=2;l<n;l++)
                {
                    if(l+j==n && marked[l]==false)
                    {
                        ck=1;
                        goto out;
                    }

                }
            }
        }
        out:
            if(ck)
            printf("%d = %d + %d\n",n,l,j);
            else
                printf("Goldbach's conjecture is wrong.\n");

    }
    return 0;
}

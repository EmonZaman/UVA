#include<bits/stdc++.h>
using namespace std;
int prime[1000000],i,j,p,n,c,k;
bool marked[1000000];
int sieve()
{

    p=0;
    for(i=2; i*i<=1000000; i++)
    {
        if(marked[i]==false)
        {
            for(j=i*i; j<=1000000; j=j+i)
            {
                marked[j]=true;
            }
        }
    }

    for(j=2; j<=1000000; j++)
    {
           if(marked[j]==false)
           {
               prime[p]=j;
               p++;

           }
    }

}
int main()
{
    int n;


    sieve();

    while(scanf("%d",&n) &&n)
    {


        c=0;

        for(k=0;k<p;k++)
        {

            if(n%prime[k]==0)
            {
                c++;
            }

        }
        printf("%d : %d\n",n,c);
    }
    return 0;

}


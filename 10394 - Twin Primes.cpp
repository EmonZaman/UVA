
#include<bits/stdc++.h>
using namespace std;
int prime[20000000],i,j,l,p,x,y,c;
bool marked[20000000];
void sieve()
{

    p=1;
    for(i=0;i<=0;i++)
    {

    }
    for(i=2; i*i<=20000000; i++)
    {
        if(marked[i]==false)
        {
            for(j=i*i; j<=20000000; j=j+i)
            {
                marked[j]=true;
            }
        }
    }

    for(x=2; x<20000000; x++)
    {
        if(marked[x]==false)
        {



            if(marked[x+2]== marked[x])
            {

                prime[p]=x;
                p++;
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
        printf("(%d, %d)\n",prime[n],prime[n]+2);

    }
    return 0;


}

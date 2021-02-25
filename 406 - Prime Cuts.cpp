#include<bits/stdc++.h>
using namespace std;
int prime_factors[100000],i,j,l,p;
bool marked[1000003];
void sieve()
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
    marked[1]=false;
    for(j=1; j<=100000; j++)
    {
           if(marked[j]!=true)
           {
               prime_factors[p]=j;
               p++;

           }
    }

}
int manin()
{
    int n,c,k,start,finish,p;
    sieve();
    while(scanf("%d %d", &n, &c)==2)
    {
        if(p%2==0)
        {
            c=c*2;
        }
        else
        {
            c=(2*c)-1;
        }
        if(c>=p)
        {
            start=0;
            finish=p;
        }
        else
        {
            start=p/2;
        finish=start+c;
        }

      for(j=start; j<finish; j++)
        {
            printf("%d ",prime_factors[j]);
        }

    }
    return 0;

}



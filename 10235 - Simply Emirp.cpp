#include<bits/stdc++.h>
using namespace std;
int prime_storage[1000000],p,i,j,n;

void sieve(int n)
{
    bool marked[1000000];
    p=0;

    for(i=2; i*i<=n; i++)
    {
        if(marked[i]==false)
        {
            for(j=i*i; j<=n; j=j+i)
            {
                marked[j]=true;
            }
        }
    }
    for(i=2; i<=n; i++)
    {
        if(marked[i]!=true)
        {
            prime_storage[p]=i;
            p++;
        }
    }
}
int main()
{
    sieve(1000000);
    int input;
    label:
    while(scanf("%d",&input)==1)
    {
        int ans=input;
        int neww=0,check,c=0,e=0;
        for(int i=0; i<input-1; i++)
        {
            for(int l=0; l<input; l++)
            {
                if(input==prime_storage[l])
            {
                c=1;
                while(input!=0)
                    {
                        check=input%10;
                        input=input/10;
                        neww=(neww*10)+check;
                    }
                    for(int j=0; j<neww-1; j++)
                    {
                        for(int k=0; k<neww-1; k++)
                        {
                            if(neww==prime_storage[k])
                            {
                                printf("%d is emirp.\n",ans);
                                goto label;

                            }

                        }
                    }

                        printf("%d is prime.\n",ans);

                }
            }



        }
         if(c==0)
                printf("%d is not prime.\n",ans);
    }

}




#include<stdio.h>
long long int f91(long long int n)
{

    if(n<=100)
    {
        return f91(f91(n+11));
    }
    if(n>=101)
    {
         return n-10;

    }
}

int main()
{
    long long int n,a,ans;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        ans=f91(n);
        printf("f91(%lld) = %lld\n",n,ans);
    }
    return 0;

}

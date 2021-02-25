#include<stdio.h>
int main()
{
    long int i,j,k,l,n,sum;
    while(scanf("%ld", &n)==1)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            k=i*i*i;
            sum=sum+k;
        }
        printf("%ld\n",sum);
    }
    return 0;

}

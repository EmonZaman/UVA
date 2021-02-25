#include<stdio.h>
int main()
{
    int n,k,sum;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        sum=0;
        while(n>0){
            k=n%10;
            n=n/10;
            sum=sum+k;
            if(n<=0 && sum>=10){
                n=sum;
                sum=0;
            }
        }

         printf("%d\n",sum);
    }
    return 0;

}

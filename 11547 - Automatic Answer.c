#include<stdio.h>
int main()
{
    int t,n,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        n*=567;
        n/=9;
        n+=7492;
        n*=235;
        n/=47;
        n-=498;
        n/=10;
        n=abs(n%10);
        printf("%d\n",n);
    }
    return 0;
}

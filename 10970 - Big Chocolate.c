#include<stdio.h>
int main()
{
    int m,n,i,ans;
    while(scanf("%d %d", &m, &n)==2)
    {
        i=m*n;
        ans=i-1;
        printf("%d\n",ans);
    }
    return 0;
}

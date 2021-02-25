#include<stdio.h>
int main()
{
    int t,j,n,m,ans;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d %d", &n, &m);
        m=m/3;
        n=n/3;
        ans=m*n;
        printf("%d\n",ans);
        t--;

    }
    return 0;
}

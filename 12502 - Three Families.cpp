#include<stdio.h>
#include <math.h>
int main()
{
    int x,y,z,ans,n;
    scanf("%d",&n);
        while(n--)
        {
           scanf("%d%d%d",&x,&y,&z);
           ans=z*(x+(x-y))/(x+y);

           printf("%d\n",ans);
        }
    return 0;
}

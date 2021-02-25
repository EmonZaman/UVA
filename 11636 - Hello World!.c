#include<stdio.h>
int main()
{
    int n,i=1,k=1,l;
    while(scanf("%d",&n)==1)
    {
        l=1;

        k=0;
        if(n<0)
        {
            return 0;
        }
        while(l<n)
        {

           l=l+l;
           k++;
        }
        printf("Case %d: %d\n",i,k);
        i++;
    }
    return 0;
}

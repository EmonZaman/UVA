#include<bits/stdc++.h>
using namespace std;
 int a[2000001];
int main()
{
     int i,j,k,n,temp,l;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
         return 0;
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
       sort(a,a+i);
        for(l=0;l<n;l++)
        {
            printf("%d",a[l]);
            if(l<n-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

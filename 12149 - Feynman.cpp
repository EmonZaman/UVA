#include<stdio.h>
int main()
{
    int n,i,count,k;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
        {
            break;
        }
        count=0;
        for(i=1;i<=n;i++)
        {
            k=i*i;
            count=count+k;
        }
        printf("%d\n",count);

}
 return 0;
}

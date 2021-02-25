#include<stdio.h>
int main()
{
    int a[101];
    int i,j,k,t,large,n,small,max;
    scanf("%d",&n);
    while(n>0){

    scanf("%d",&t);
    large=-1;
    small=21400000;
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<t;j++)
    {
        if(a[j]>large)
        {
            large=a[j];
        }
        if(a[j]<small)
        {
            small=a[j];
        }
    }
    max=(large-small)*2;
    printf("%d\n",max);
    t--;
    }
    return 0;
}

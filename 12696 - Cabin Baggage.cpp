#include<stdio.h>
int main()
{
    float l,w,d,m,k;
    int count=0,t,n=0;
    scanf("%d",&t);
    while(t>0)
    {
        count=0;
        scanf("%f%f%f%f", &l, &w, &d, &m);
        k=l+w+d;
        if(((l<=56 && w<=45 && d<=25) || k<=125) && m<=7)
        {
                count=count+1;

        }
        printf("%d\n",count);
        n=n+count;
        t--;

    }
    printf("%d\n",n);
    return 0;
}

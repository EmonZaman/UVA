#include<stdio.h>
#define PI acos(-1)


int main()
{
    int t,i;
    double l,w,r,areac, arearec;
    scanf("%d",&t);
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lf",&l);
            r=l/5;
            w=(l*6)/10;
            areac=PI*r*r;
            arearec=(l*w)-areac;
            printf("%.2lf %.2lf\n",areac,arearec);
        }
    }
    return 0;
}

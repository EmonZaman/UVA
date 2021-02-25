#include<stdio.h>
#include<math.h>
int main()
{
     int n,i=1;
     double u,v,d,t1,t2,t,a;

      scanf("%d",&n);
    while(n>0)
        {


            scanf("%lf%lf%lf",&d,&v,&u);
            if((v>=u)||(v<=0)||(u<=0)||(d<=0))
            printf("Case %d: can't determine\n",i);
            else
            {
            a=sqrt(u*u-v*v);
            t1=d/a;
            t2=d/u;
            t=t1-t2;
            printf("Case %d: %.3lf\n",i,t);
            }
            n--;
            i++;
        }
    return 0;
}

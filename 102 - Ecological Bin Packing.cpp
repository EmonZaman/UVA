#include<stdio.h>
int main()
{
    long long int b1,g1,c1,b2,g2,c2,b3,g3,c3,i,j,k,l,ans,s,a[6];
    while(scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld", &b1, &g1, &c1, &b2, &g2, &c2, &b3, &g3, &c3)==9)
    {
        a[0]=b2+b3+c1+c3+g1+g2;
        a[1]=b2+b3+c1+c2+g1+g3;
        a[2]=b1+b3+c2+c3+g1+g2;
        a[3]=b1+b2+c2+c3+g1+g3;
        a[4]=b1+b3+c1+c2+g3+g2;
        a[5]=b2+b1+c1+c3+g3+g2;
        s=2147483648;
        for(i=0; i<6; i++)
        {
            if(a[i]<s)
            {
                s=a[i];
                ans=i;
            }
        }
        if(ans==0)
        {
            printf("BCG %lld\n",s);

        }
        else if(ans==1)
        {
            printf("BGC %lld\n",s);

        }
        else if(ans==2)
        {
            printf("CBG %lld\n",s);

        }
        else if(ans==3)
        {
            printf("CGB %lld\n",s);

        }
        else if(ans==4)
        {
            printf("GBC %lld\n",s);

        }
        else if(ans==5)
        {
            printf("GCB %lld\n",s);

        }
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int i,l,a,b,c,d,e,x,z=0,y;
    char s[10000];
    while(gets(s))
    {
         if(z!=0)
        {
             printf("\n");
        }
        z=1;
        a=0;
        b=0;
        c=0;
        d=0;
        e=0;
        x=0;
        y=0;
        l=strlen(s);
        for(i=0;i<l;i++)
        {

            a=(a*10)+(s[i]-'0');
            a=a%4;
        }
        for(i=0;i<l;i++)
        {

            b=(b*10)+(s[i]-'0');
            b=b%100;
        }
        for(i=0;i<l;i++)
        {

            c=(c*10)+(s[i]-'0');
            c=c%400;
        }
        for(i=0;i<l;i++)
        {

            d=(d*10)+(s[i]-'0');
            d=d%15;
        }
        for(i=0;i<l;i++)
        {

            e=(e*10)+(s[i]-'0');
            e=e%55;
        }


        if((a==0 && b!=0) || c==0)
        {
             printf("This is leap year.\n");
             x=1;
             y=1;
        }
          if(d==0)
        {
              printf("This is huluculu festival year.\n");
           y=1;
        }
        if(e==0 && x==1)
        {
             printf("This is bulukulu festival year.\n");
        }

        if(y==0)
        {
             printf("This is an ordinary year.\n");
        }

    }
    return 0;
}

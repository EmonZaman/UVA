#include<stdio.h>
#include<string.h>
int main()
{
    char s[10],p[10],d[10],f[10];
    int t,sum2,sum1,finalsum;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%s%s%s%s",&s,&p,&d,&f);
        sum2=sum1=finalsum=0;
        sum1=sum1+((s[0]-'0')*2)%10+((s[0]-'0')*2)/10+ ((s[2]-'0')*2)%10+ ((s[2]-'0')*2)/10;
        sum1=sum1+((p[0]-'0')*2)%10+((p[0]-'0')*2)/10+ ((p[2]-'0')*2)%10+ ((p[2]-'0')*2)/10;
        sum1=sum1+((d[0]-'0')*2)%10+((d[0]-'0')*2)/10+ ((d[2]-'0')*2)%10+ ((d[2]-'0')*2)/10;
        sum1=sum1+((f[0]-'0')*2)%10+((f[0]-'0')*2)/10+ ((f[2]-'0')*2)%10+ ((f[2]-'0')*2)/10;
        sum2=(s[1]-'0'+s[3]-'0'+p[1]-'0'+p[3]-'0'+d[1]-'0'+d[3]-'0'+f[1]-'0'+f[3]-'0');

        finalsum=sum2+sum1;

        if(finalsum%10==0)
        {
            printf("Valid\n");
        }
        else
        {
            printf("Invalid\n");
        }
        t--;
    }
    return 0;
}

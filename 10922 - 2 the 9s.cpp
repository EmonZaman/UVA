#include<stdio.h>
#include<string.h>
int main()
{
    char s[10002];
    int i,j,k,l,n,sum,sum1,rem,count,len;
    while(gets(s))
    {
        sum=0;
        rem=0;
        l=strlen(s);
        if(strcmp(s,"0")==0)
            break;
        for(i=0; i<l; i++)
        {
            sum=sum+(s[i]-48);
            sum1=(rem*10)+(s[i]-'0');
            rem=sum1%9;
        }
        if(rem!=0)
        {
            printf("%s is not a multiple of 9.\n",s);

        }
        else
        {
            count=1;
            while(sum>9)
            {
                count++;
                len=0;
                while(sum>0)
                {
                    len+=sum%10;
                    sum/=10;
                }
                sum=len;
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n",s,count);
        }
    }
    return 0;
}

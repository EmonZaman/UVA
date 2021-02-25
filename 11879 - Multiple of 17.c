#include<stdio.h>
#include<string.h>
int main()
{
    char s[1020];
    int i,j,k,l,sum,rem;
    while(gets(s))
    {

        rem=0;
        i=0;
        sum=0;

        l=strlen(s);
        if(s[0]=='0' && l==1)
        {
         return 0;
        }
        for(i=0;i<l;i++)
        {
            sum=rem*10+(s[i]-'0');
            rem=sum%17;

        }

       if(rem==0)
       {
           printf("1\n");
       }
       else
       {
           printf("0\n");
       }



    }
    return 0;
}

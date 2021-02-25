#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000];
    int i,j,k,l,sum,rem;
while(scanf("%s",&s)==1)
{


    l=strlen(s);
     if(s[0]=='0' && l==1)
        {
         return 0;
        }
    rem=0;
    sum=0;
    i=0;
    for(i=0;i<l;i++)
    {
        sum=(rem*10)+(s[i]-'0');
        rem=sum%11;
    }
    if(rem==0)
    {
        printf("%s is a multiple of 11.\n",s);

    }
    else
    {
        printf("%s is not a multiple of 11.\n",s);
    }

}
    return 0;
}

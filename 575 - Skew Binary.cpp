#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[1000];
    int i,j,k,l,n,m,sum;
    while(gets(s))
    {
        sum=0;
        l=strlen(s);
        if(l==1 && strcmp(s,"0")==0)
        {
            break;
        }
        n=l;
        for(i=0;i<l;i++)
        {
            sum=sum+((s[i]-'0')*(pow(2,n)-1));
            n--;
        }
        printf("%d\n",sum);

    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    int i,count=0;
    while(gets(s))
    {
        for(i=0;s[i];i++)
        {
            if(s[i]=='"')
            {
                count=count+1;
                if(count%2==0)
                {
                    printf("''");
                }
                else
                {
                    printf("``");
                }
            }
            else
            {
                printf("%c",s[i]);
            }
        }
        printf("\n");
    }
    return 0;
}


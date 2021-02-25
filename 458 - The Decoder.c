#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int m,i;
    while (gets(s))
    {
        m=strlen(s);
        for(i=0;i<m;i++)
        {
            printf("%c",s[i]-7);
        }

        printf("\n");
    }
    return 0;

}

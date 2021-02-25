#include<stdio.h>
int main()
{
    char s[10];
    int n,m;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",s);
        m=strlen(s);
        if(m==5)
        {
            printf("3\n");
        }
        else
        {
            if((s[0]=='o'&&s[1]=='n') ||(s[0]=='o'&&s[2]=='e')||(s[1]=='n'&&s[2]=='e'))
            {
                printf("1\n");
            }
            else{printf("2\n");}
        }
    }
    return 0;

}

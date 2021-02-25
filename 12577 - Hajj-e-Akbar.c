#include<stdio.h>
int main()
{
    char str[100];
    int i=1,j;
    while(gets(str))
    {

        j=strlen(str);
        if(j==1)
        {
            break;
        }

        if(j==4){
            printf("Case %d: Hajj-e-Akbar\n",i);

        }
        if(j==5){
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
         i++;
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10];
    int i,j,k,t,l,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",&s1);
        k=strcmp("donate",s1);
        l=strcmp("report",s1);
        if(k==0){
            scanf("%d",&j);
           sum=sum+j;
        }

        else if(l==0)
        {
            printf("%d\n",sum);
        }

        }

return 0;

}

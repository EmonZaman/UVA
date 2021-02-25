#include<stdio.h>
#include<string.h>
int main()
{
    int i,k,l,m,n,t,count=0,j=1;
    char s[100001];
    char s1[10005];
    int a[101];

    scanf("%d", &t);
    while(t>0)
    {
        scanf("%d", &n);
        for(i=1; i<=n; i++)
        {
            scanf("%s",s);
            if(strcmp(s,"LEFT")==0)
            {

                a[j++]=-1;
                count=count-1;
            }

            else if(strcmp(s,"RIGHT")==0)
            {

                a[j++]=1;
                count=count+1;
            }
            else
            {
                scanf("%s%d",s1,&l);

                a[j++]=a[l];
                count=count+a[l];


            }





        }
        printf("%d\n",count);
        count=0;
         j=1;
        t--;

    }
    return 0;
}


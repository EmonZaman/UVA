#include<stdio.h>
int main()
{
    int k,l,count,n;

        while(scanf("%d",&n)==1)
        {


        l=n;
        count=0;
        while(n>1)
        {
            k=n/3;
            n=n%3;

            count=count+k;

            n=n+k;

            if(n==2)
            {
                count=count+1;;
                break;
            }
        }
        count=count+l;

        printf("%d\n",count);
        }



    return 0;
}

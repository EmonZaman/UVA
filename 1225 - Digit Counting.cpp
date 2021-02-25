#include<stdio.h>
int main()
{
    int i,j,k,l,count,n,t;
    scanf("%d",&t);
    while(t>0)
    {



        scanf("%d",&n);



        for(i=0; i<=9; i++)
        {
            count=0;
            for(j=1; j<=n; j++)
            {
                if(j==i)
                {
                    count=count+1;
                }
                if(j>9)
                {
                    l=j;

                    while(l>0)
                    {




                        k=l%10;
                        l=l/10;

                        if(k==i)
                        {
                            count=count+1;
                        }

                    }

                }
            }
            if(i==9)
            {
                printf("%d",count);
                goto h;
            }
            printf("%d ",count);
        }
        h :
        printf("\n");
        t--;
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int h,l,i,j,k,m,n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&h, &l);
        for(i=1; i<=l; i++)
        {
            for(j=1; j<=h; j++)
            {
                for(k=1; k<=j; k++)
                {
                    printf("%d",j);
                }

                printf("\n");
                if(j==h)
                {
                    for(m=h-1; m>=1; m--)
                    {
                        for(n=1; n<=m; n++)
                        {
                            printf("%d",m);
                        }
                        printf("\n");
                    }

                }

            }
            if(i<l)
                printf("\n");
        }
        if(t>0)
            printf("\n");
    }
    return 0;
}

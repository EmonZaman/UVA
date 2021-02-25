#include<stdio.h>
int main()
{
    int i,j,N,n1,n2,r,G;
    while(scanf("%d",&N)==1)
    {


        if(N==0)
        {
            break;
        }
        G=0;
        for(i=1; i<=N; i++)
        {
            for(j=i+1; j<=N; j++)
            {
                n1=i;
                n2=j;
                while(n2!=0)

                {
                    r=n1%n2;
                    n1=n2;
                    n2=r;
                }
                G=G+n1;
            }
        }
        printf("%d\n",G);

    }
    return 0;
}

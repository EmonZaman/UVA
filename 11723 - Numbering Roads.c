#include<stdio.h>
int main()
{
    int m,n,r,l,i=0;

    while (scanf("%d%d", &r, &n)==2)
    {

           m=r-n;
        l=n*26;
        i++;
        if(r==0 && n==0)
        {
            break;
        }

        else if(n>r)
         {
             m=0;

             printf("Case %d: %d\n",i,m);


         }


       else  if(m>l)
        {
            printf("Case %d: impossible\n",i);

        }
        else
        {
            if(m%n==0)
            {
                m=m/n;
            }
            else
            {
                m=m/n;
                m=m+1;
            }
          printf("Case %d: %d\n",i,m);

        }


    }


    return 0;
}

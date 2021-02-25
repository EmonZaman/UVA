#include<stdio.h>
int main()
{
    int i,j,k,l,o,p,count=-1,count1=0,m,n,temp;


    while (scanf("%d %d", &n, &m)==2)
    {

        if(n>m)
        {
          temp=n;
          n=m;
          m=temp;
        }
         o=n;
      p=m;



    for(i=n;i<=m;i++)
    {
        count1=count1+1;
        n=i;
        while(n!=1)
        {


             if(n%2==1)
             {
                 n=(n*3)+1;
             }
             else
             {
                 n=n/2;
             }
              count1=count1+1;


            }

            if(count1>count)
            {
                count=count1;
            }
            count1=0;

        }
        printf("%d %d %d\n",o,p,count);
        count=-1;
        count1=0;
    }
        return 0;

}

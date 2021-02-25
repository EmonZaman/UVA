#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,t,start,e,temp,highest,c;
    scanf("%d",&t);

    while(t>0)
    {
        scanf("%d %d",&start,&e);


       temp=0;


        for(i=start;i<=e;i++)
        {


           c=0;

            int p=sqrt(i);

            for(j=1;j<=p;j++)
            {
                if(j*j==i)
                {
                    c++;
                }
                else if(i%j==0)
                {
                    c=c+2;

                }
            }
            if(c>temp)
            {
                temp=c;


                highest=i;
            }
        }
      printf("Between %d and %d, %d has a maximum of %d divisors.\n",start,e,highest,temp);

       t--;


    }
    return 0;
}

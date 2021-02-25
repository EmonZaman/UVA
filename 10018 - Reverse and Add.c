#include<stdio.h>
int main()
{
    long long int n,temp,count=0,rev=0,m,t;
    scanf("%lld",&t);
    while(t>0)
    {


    scanf("%lld",&n);
    h :
    temp=n;
    count=count+1;
    while(n>0)
    {

       m=n%10;
       rev=(rev*10)+m;
       n=n/10;

    }

     n=temp+rev;


     rev=0;
     temp=n;


      while(n>0)
    {

       m=n%10;
       rev=(rev*10)+m;
       n=n/10;
    }
    if(temp==rev)
    {
       printf("%lld %lld\n",count,rev);
       goto b;

    }



    else
    {
       rev=0;

       n=temp;

        goto h;
    }
    b :

        rev=0;
        temp=0;
        n=0;
        count=0;
    t--;

    }

    return 0;
}

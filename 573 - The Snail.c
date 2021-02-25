#include<stdio.h>
int main()
{
    int count=0;
    float h,u,d,f,i=0.00,j,k,l;
    while(scanf("%f %f %f %f", &h, &u, &d, &f)==4)

    {
        if(h==0)
        {
           break;
        }

           j=((f/100)*u);


        while((h>=i))
        {



 count=count+1;
             k=u;
             if(k>0)
             {
                 i=i+k;
             }
             if(i>h)
             {

                goto x;
             }


             i=i-d;


             if(i<0)
             {

                   printf("failure on day %d\n",count);
                goto h;
             }



             u=u-j;

             if(u<=0)
             {

                 u=0;
             }


        }
        x :

       printf("success on day %d\n",count);
        h :
        count=0;
        i=0.00;
    }






    return 0;
}


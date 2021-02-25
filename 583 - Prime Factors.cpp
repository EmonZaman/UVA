#include<bits/stdc++.h>
using namespace std;


int prime_factors[100000],i,j,l,p;
bool marked[1000003];

void sieve ()
{


    p=0;
    for(i=2; i*i<=1000000; i++)
    {

        if(marked[i]==false)
        {
            for(j=i*i; j<=1000000; j=j+i)
            {
                marked[j]=true;
            }
        }
    }

    for(j=2; j<=100000; j++)
    {
           if(marked[j]!=true)
           {
               prime_factors[p]=j;
               p++;

           }
    }

}

void countdivisor(int n)
{

    int divisor = 1,count=0;
  for (int i = 0; i <= n+1; i++) {
        if(prime_factors[i]>n)
        {
            break;
        }

    if (n %  prime_factors[i] == 0) {


      while (n %  prime_factors[i]== 0) {
        n /=  prime_factors[i]; 

        if(divisor == 1)
        {
            printf("%d",prime_factors[i]);
            divisor++;
            count++;
        }
        else
        {
            printf(" x %d",prime_factors[i]);
            count++;
        }


      }

    }

  }
  if(count==0)
  {
      printf("%d",n);
  }
   printf("\n");

}

int main()
{
    int n,ans;
    sieve();

   while( scanf("%d",&n)==1)
   {

       if(n==0)
       {
           break;
       }


    if(n<0)
    {
         printf("%d = -1 x ",n);

        n = abs(n);

    }
    else
    {
        printf("%d = ",n);
    }
     if(n==1 || n==-1)
     {
         printf("\n");
         continue;
     }


    countdivisor(n);
   }
   return 0;


}


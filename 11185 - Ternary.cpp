
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,n,m,a[10000];


    while(cin>>n)
    {
        if(n<0)
        {
            break;
        }

        if(n==0)
        {
            cout<<0<<endl;
        }
        else
        {
             i=1;
             while(n>0)
             {
                 a[i]=n%3;
                 n=n/3;
                 i++;

             }

              for(j=i-1;j>=1;j--)
              {

                  cout<<a[j];

              }
              cout<<endl;
         }




    }

    return 0;
}

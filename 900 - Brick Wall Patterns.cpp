#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

         int a[60];
         a[0]=1;
         a[1]=1;
         for(int i=2;i<=60;i++)
         {
             a[i]=a[i-1]+a[i-2];
         }
         while(cin>>n && n!=0)
    {

        cout<<a[n]<<endl;
    }
    return 0;


}

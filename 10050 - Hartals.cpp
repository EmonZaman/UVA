#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        int day;
        cin>>day;
        int a[100000];
        int n=14,n1=13;
        for(int i=1; i<=day; i++)
            {
                a[i]=0;
                if(i==n )
                 {
                     a[i]=1;
                     n=n+7;
                 }
                 if(i==n1)
                 {
                     a[i]=1;
                     n1=n1+7;

                 }
            }
            a[6]=1;
            a[7]=1;
        int party;
        cin>>party;
        while(party--)
        {
            int each;
            cin>>each;
            int sum=0;
             for(int i=1;i<=day;i++)
             {
                 sum=sum+each;
                 if(sum>day)
                    break;
                 if(a[sum]==0)
                 {
                     cnt++;
                     a[sum]=1;
                 }

             }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

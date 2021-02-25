#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n;
    while(cin>>n,n)
    {
        //cout<<n<<endl;
        //cin.ignore();
        getchar();
//        if(n==0)
//        return 0;
        int a[n];
        string s;
        int check=-1000;
        for( unsigned int z=0; z<n; z++)
        {
            getline(cin,s);
            int cnt=0;
            for(int i=0;i<25; i++)
            {
               if(s[i]!='X')
                cnt++;
            }
             a[z]=cnt;
            if(cnt<check || check==-1000)
            {
                check=cnt;
            }


        }
        int total=0;
        for(int i=0;i<n;i++)
        {
            total=total+a[i]-check;
        }
        cout<<total<<endl;

    }
    return 0;
}

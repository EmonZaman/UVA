#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>m;

    int n1,n2,push;
    while(scanf("%d %d", &n1, &n2)==2 && n1!=0 && n2!=0)
    {


        int cnt=0;

        for(int i=0; i<n1; i++)
        {
            scanf("%d",&push);
            m[push]++;
        }

        for(int j=0; j<n2; j++)
        {

            scanf("%d",&push);
            m[push]++;
        }
        map<int,int> ::iterator it;
        for(it=m.begin(); it!=m.end(); it++)
        {

            if(it->second>1)
            {
                cnt++;
            }

        }
        cout<<cnt<<endl;
        m.clear();
    }



}

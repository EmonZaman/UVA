#include<bits/stdc++.h>

using namespace std;
int main()
{

    int i,j,n,k,p,cnt,m,big;
    while(scanf("%d",&n)&&n)
    {
        map<vector<int>,int>mp;
        big=0;
        cnt=0;
        for(j=0;j<n;j++)
        {
        vector<int>vec;
        for(i=1;i<=5;i++)
        {
            cin >>m;
            vec.push_back(m);
        }
        sort(vec.begin(),vec.end());
        mp[vec]++;
        }
        map<vector<int>,int> :: const_iterator it;
        for(it=mp.begin();it!=mp.end();++it)
        {
            if(it->second>big)
            {
                big=it->second;
            }
        }

         for(it=mp.begin();it!=mp.end();++it)
        {
            if(it->second==big)
            {
                cnt+=big;
            }
        }
      cout <<cnt<<endl;
    }

  return 0;
}


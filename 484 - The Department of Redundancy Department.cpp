#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    map<int,int>m;
    map<int,int>:: iterator it;
    vector<int>vec;
    while(scanf("%d",&n)==1)
    {
        if(m[n]==0)
        {
            m[n]=1;
            vec.push_back(n);
        }
        else

        m[n]++;
    }
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" "<<m[vec[i]]<<endl;
    }
}

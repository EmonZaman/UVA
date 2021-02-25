#include<bits/stdc++.h>
using namespace std;

map<string, int> m;
int n;
double trees;
string s;
int main()
{


    cin >> n;
    getline(cin, s);
    getline(cin, s);
    cout << setprecision(4) << fixed;
    for(int i=0; i<n; i++)
    {
        if(i > 0) cout << '\n';
        trees = 0;
        m.clear();
        while(getline(cin, s) && s!="")
        {
            m[s]++;
            trees++;
        }
        for(map<string, int>::iterator it=m.begin(); it!=m.end(); it++)
            cout << it->first << " " << (it->second)*100/trees << '\n';
    }

    return 0;
}

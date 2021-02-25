#include<stdio.h>
#include<iostream>
#include<vector>
#define SIZE 10000
using namespace std;
vector<int>v[SIZE];

bool visit[SIZE];
void dfsvisit(int n)
{
    visit[n]=true;
    for(int i=0;i<v[n].size();i++)
    {
        int x=v[n][i];
        if(visit[x]==false)
        {
            dfsvisit(x);
        }
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,m,l;
        scanf("%d %d %d",&n, &m, &l);
        for(int i=0;i<n+1;i++)
        {
            visit[i]=false;
            v[i].clear();

        }
        for(int i=0;i<m;i++)
        {
            int n1,n2;
            scanf("%d %d",&n1, &n2);
            v[n1].push_back(n2);
        }
        for(int i=0;i<l;i++)
        {
            int x;
            scanf("%d",&x);
            dfsvisit(x);
        }
        int count=0;
        for(int i=0;i<n+1;i++)
        {
            if(visit[i])
            {
                count++;
            }

        }
          printf("%d\n",count);

    }


}




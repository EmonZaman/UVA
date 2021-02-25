#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >>n&&n)
    {
         int i,j,cnt=0,flag=0,a,b,x,sum=0;
        priority_queue<int>que;
        for(i=0;i<n;i++)
        {
            cin >>j;
            j*=-1;
            que.push(j);
        }
        while(que.size()!=1)
        {
            a=que.top();
            que.pop();
            b=que.top();
            que.pop();
            x=(a+b);
            sum+=(x*-1);
            que.push(x);
            if(que.size()==1)
                break;
        }

       cout <<sum<<endl;
    }
    return 0;
}

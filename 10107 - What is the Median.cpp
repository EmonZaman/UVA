#include<bits/stdc++.h>
using namespace std;
int n;


int main()
{

    priority_queue<int>q;

    while(1)
    {

        scanf("%d",&n);
        q.push(n);
        int i=q.size();
        if(i==3)
        {
            printf("%d ",q.[3]);
        }


        //       if(i==1)
//       {
//           printf("%d\n",q.top());
//       }
//       else if(i%2==0)
//       {
//            int ans=((q.[+a[i/2+1])/2);
//           int ans=((a[i/2]+a[i/2+1])/2);
//
//           printf("%d\n",ans);
//       }
//       else
//       {
//           printf("%d\n",a[i/2+1]);
//       }
//       i++;




    }
}

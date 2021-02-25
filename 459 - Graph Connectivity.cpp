#include<bits/stdc++.h>
using namespace std;
int parent[10000],renk[10000];
void make_set(int x)
{
    parent[x]=x;
    renk[x]=0;

}
int fiind(int x)
{
    if(x==parent[x])
        return parent[x];
    else
        return parent[x]=fiind(parent[x]);
}
int unionn(int &x, int &y)
{
    int px=fiind(x);
    int py=fiind(y);
    if(renk[px]>renk[py])
        parent[py]=px;
    else
    {
        parent[px]=py;
        if(renk[px]==renk[py])
        {
            renk[py]++;
        }
    }
}


int main()
{
    int t,x,y,value;

    scanf("%d\n\n",&t);


    for(int z=1; z<=t; z++)
    {
        //cout<<endl;
          string c;
        getline(cin,c);
        int xxx=c[0]-'A'+1;
         value=xxx;
 for(int i=0;i<xxx;i++)
        make_set(i);
        while(1){
            if(!getline(cin,c) || c.empty()) break;
            x=c[0]-'A';
            y=c[1]-'A';
            if(fiind(x)!=fiind(y))
            {
                unionn(x,y);
                value--;
            }

        }
         if(z!=1) printf("\n");
     printf("%d\n",value);
//        cout<<xxx<<endl;
//        for(int i=0;i<xxx;i++)
//        {
//
//            cout<<parent[i]<<endl;
//        }
//cout<<z<<endl;
       //set<int>s;


     // for(int i=0; i<x; i++)
      //{
         //  s.insert(parent[i]);
      // }
       // if(z!=1)
       //  {
         //   cout<<endl;
      // }
   // cout<<s.size()<<endl;      //cout<<endl;
     //  s.clear();




    }
    return 0;

}

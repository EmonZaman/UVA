#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string>m;
   char s[100],a[100],b[100];
    while(gets(s))
   {
        if(s[0]=='\0')
            break;
        sscanf(s,"%s %s", a, b);
        m[b]=a;

   }
  while(gets(s))
  {
      if(m.find(s)!=m.end())
      {
          cout<<m[s]<<endl;
      }
      else
        printf("eh\n");
       // cout<<"eh"<<endl;
  }
  return 0;

}

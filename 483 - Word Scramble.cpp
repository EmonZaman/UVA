#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string s1,s2,s3;
    int i,j,k,l,m,n,u;
    while(getline(cin,s))
    {
        if(s=="DONE")
        {
            break;
        }
        n=0;
        cout<<s<<endl;
        l=s.size();
        for(i=0; i<l; i++)
        {
            if((s[i]>='a' && s[i]<='z') ||(s[i]>='A' && s[i]<='Z'))
            {
                s1[n]=s[i];
                s2[n]=s[i];
                s1[n]=toupper(s1[n]);
                s2[n]=toupper(s1[n]);
                n++;
            }
        }
        m=s1.size();
        cout<<m<<endl;
        u=0;
        for(i=m-1; i>=0; i--)
        {

            s3[u]=s2[i];
            u++;
        }
        cout<<s2;
        if(s1==s3)
        {
            printf("You won't be eaten! \n");
        }
        else
        {
            printf("Uh oh..\n");
        }
    }
    return 0;
}




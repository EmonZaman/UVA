#include<bits/stdc++.h>

using namespace std;


int main()
{
    char s[100];
   while(gets(s))
   {
       if(s[0]=='#')
       {
           break;
       }
       int l=strlen(s);
       if(next_permutation(s,s+l))
       {
           for(int i=0;i<l;i++)
           {
              // printf("%c",s[i]);
           }
           printf("\n");
           puts(s);
       }
       else{
        printf("No Successor\n");
       }
   }



}

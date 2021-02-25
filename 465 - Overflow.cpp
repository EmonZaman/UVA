#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    char c;


    while(1)
    {

            char s[2000000];
        gets(s);
       puts(s);

        sscanf(s,"%lf %c %lf", &a, &c, &b);
        // cout<<a<<" "<<c<<" "<<b<<endl;



        if(a>2147483647)
            puts("first number too big");
        if(b>2147483647)
            puts("second number too big");
        if(c=='+' && a+b>2147483647)
            puts("result too big");
        if(c=='*' && a*b>2147483647)
            puts("result too big");
    }
}

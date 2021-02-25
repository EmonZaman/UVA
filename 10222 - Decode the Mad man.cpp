
#include<bits/stdc++.h>

using namespace std;



int main()

{

    string s,sum;

    int i,l;



    getline(cin,s);

    {

        l=s.size();



        for( i=0; i<l; i++)

        {

            if(s[i]=='a' || s[i]=='A')

            {

                sum+='[';

            }

            else if(s[i]=='b' || s[i]=='B')

            {

                sum+='c';

            }

            else if(s[i]=='c' || s[i]=='C')

            {

                sum+='z';

            }

            else if(s[i]=='d' || s[i]=='D')

            {

                sum+='a';

            }

            else if(s[i]=='e' || s[i]=='E')

            {

                sum+='q';

            }

            else if(s[i]=='f' || s[i]=='F')

            {

                sum+='s';

            }

            else if(s[i]=='g' || s[i]=='G')

            {

                sum+='d';

            }

            else if(s[i]=='h' || s[i]=='H')

            {

                sum+='f';

            }

            else if(s[i]=='i' || s[i]=='I')

            {

                sum+='y';

            }

            else if(s[i]=='j' || s[i]=='J')

            {

                sum+='g';

            }

            else if(s[i]=='k' || s[i]=='K')

            {

                sum+='h';

            }

            else if(s[i]=='l' || s[i]=='L')

            {

                sum+='j';

            }

            else if(s[i]=='m' || s[i]=='M')

            {

                sum+='b';

            }

            else if(s[i]=='n' || s[i]=='N')

            {

                sum+='v';

            }

            else if(s[i]=='o' || s[i]=='O')

            {

                sum+='u';

            }

            else if(s[i]=='p' || s[i]=='P')

            {

                sum+='i';

            }

            else if(s[i]=='q' || s[i]=='Q' )

            {

                sum+=" ";

            }

            else if(s[i]=='r' || s[i]=='R')

            {

                sum+='w';

            }

            else if(s[i]=='s' || s[i]=='S')

            {

                sum+=']';

            }

            else if(s[i]=='t' || s[i]=='T')

            {

                sum+='e';

            }

            else if(s[i]=='u' || s[i]=='U')

            {

                sum+='t';

            }

            else if(s[i]=='v' || s[i]=='V')

            {

                sum+='x';

            }

            else if(s[i]=='w' || s[i]=='W')

            {

                sum+=" ";

            }

            else if(s[i]=='x' || s[i]=='X')

            {

                sum+=';';

            }

            else if(s[i]=='y' ||  s[i]=='Y')

            {

                sum+='r';

            }

            else if(s[i]=='z' ||  s[i]=='Z')

            {

                sum+=39;

            }

            else if(s[i]=='!'||s[i]=='<'||s[i]=='>')

            {

                sum+=" ";

            }

            else if(s[i]=='[')

            {

                sum+='o';

            }

            else if(s[i]==']')

            {

                sum+='p';

            }

            else if(s[i]==',')

            {

                sum+='n';

            }

            else if(s[i]=='.')

            {

                sum+='m';

            }

            else if(s[i]==';')

            {

                sum+='k';

            }

            else if(s[i]==39)

            {

                sum+='l';

            }

            else if(s[i]=='/')

            {

                sum+=',';

            }

            else if(s[i]==32)

            {

                sum+=" ";

            }

        }

        cout<<sum<<endl;



    }

    return 0;



}

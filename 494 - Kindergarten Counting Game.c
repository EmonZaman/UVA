#include<stdio.h>

int main()
{
    char s[100];
    int i,count,temp,m;
    while(gets(s))
          {
              count=0;
              temp=1;

              for(i=0;s[i];i++)
                {
                    if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z'))
                    {
                        if(temp==1)
                        {
                            count++;

                            temp=0;
                        }

                    }
                     else
                        {
                            temp=1;
                        }

                }
                 printf("%d\n",count);

          }
          return 0;


}

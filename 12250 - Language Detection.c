#include<stdio.h>
int main()
{
   char a[201];
   int test=0;
    while(gets(a))
    {
        test++;
        if(strcmp(a,"#")==0)
        {
           return 0;
        }
         if(strcmp(a,"HELLO")==0)
        {
            printf("Case %d: ENGLISH\n",test);
        } else if(strcmp(a,"HOLA")==0)
        {
            printf("Case %d: SPANISH\n",test);
        } else if(strcmp(a,"HALLO")==0)
        {
            printf("Case %d: GERMAN\n",test);
        } else if(strcmp(a,"BONJOUR")==0)
        {
            printf("Case %d: FRENCH\n",test);
        } else if(strcmp(a,"CIAO")==0)
        {
            printf("Case %d: ITALIAN\n",test);
        } else if(strcmp(a,"ZDRAVSTVUJTE")==0)
        {
            printf("Case %d: RUSSIAN\n",test);
        }
        else{
            printf("Case %d: UNKNOWN\n",test);
        }
    }
    return 0;
}

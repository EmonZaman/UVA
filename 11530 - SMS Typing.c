#include<stdio.h>
#include <string.h>


int main()
{
    char a[1010];
    int i,m,t,j,k,count=0;
    scanf("%d",&t);
    getchar();
    for(j=1; j<=t; j++)
    {



        m=strlen(gets(a));

        k=m;

        count = 0;
        for(i=0; i<k; i++)
        {

            if(a[i]=='a'||a[i]=='d'||a[i]=='g'||a[i]=='j'||a[i]=='m'||a[i]=='p'||a[i]=='t'||a[i]=='w'||a[i]==' ')
            {
                count=count+1;

            }
             if(a[i]=='b'||a[i]=='e'||a[i]=='h'||a[i]=='k'||a[i]=='n'||a[i]=='q'||a[i]=='u'||a[i]=='x')
            {
                count=count+2;
            }
             if(a[i]=='c'||a[i]=='f'||a[i]=='i'||a[i]=='l'||a[i]=='o'||a[i]=='r'||a[i]=='v'||a[i]=='y')
            {
                count=count+3;
            }
            if(a[i]=='s'||a[i]=='z')
            {
                count=count+4;
            }
        }
        printf("Case #%d: %d\n",j,count);

    }


    return 0;
}

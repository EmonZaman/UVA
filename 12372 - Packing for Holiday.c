#include<stdio.h>
int main()
{
    int m,j,k,n,i=0;
    scanf("%d",&n);
    while(n--)
    {
        i++;
        scanf("%d %d %d", &m, &j, &k);
        if(m<=20 && j<=20 && k<=20)
        {
          printf("Case %d: good\n",i);
        }
        else
        {
            printf("Case %d: bad\n",i);
        }
    }


    return 0;
}

#include<stdio.h>
int main()
{
    int n1,n2,d;
    while(scanf("%d %d", &n1, &n2)==2)
    {
        if(n1<0 && n2<0)
        {
            break;
        }
        else
        {
            if(n1>n2)
            {
                d=n1-n2;
            }
            else
            {
                d=n2-n1;
            }
            if(d>=50)
            {
                d=100-d;
            }
        }
        printf("%d\n",d);
    }
    return 0;
}

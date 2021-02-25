#include<stdio.h>
int main()
{
    signed long int a,b,c,t;
    int i=0;
    scanf("%d",&t);
    while(t>0)
    {
        i++;
        scanf("%ld %ld %ld", &a,&b,&c);
        if(a+b>c && b+c>a && c+a>b)
        {
            if(a==b && b==c)
            {
                printf("Case %d: Equilateral\n",i);
            }
            else if(a==b || a==c || b==c)
            {
                printf("Case %d: Isosceles\n",i);
            }
            else
            {
                printf("Case %d: Scalene\n",i);
            }

        }
        else
        {
            printf("Case %d: Invalid\n",i);
        }
        t--;

    }
    return 0;



}

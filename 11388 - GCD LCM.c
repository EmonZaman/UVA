#include<stdio.h>
int main()
{
    long int i,j,n1,n2,r,l;
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%ld %ld", &n1, &n2);
        i=n1;
        j=n2;
        while(n2!=0)
        {
            r=n1%n2;
            n1=n2;
            n2=r;
        }

        l=(i*j)/n1;
        if((n1==i) && (j==l))
        {
            printf("%ld %ld\n",n1,l);
        }
        else
        {
            printf("-1\n");
        }
        t--;

    }
    return 0;
}

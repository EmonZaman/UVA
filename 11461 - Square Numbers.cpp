#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,count;
    while(scanf("%d%d",&i,&j)==2)
    {
        if(i==0 && j==0)
        {
            break;
        }
        count=0;
        for(k=i;k<=j;k++)
        {
            l=sqrt(k);
            if(l*l==k)
            {
                count=count+1;
            }

        }
        printf("%d\n",count);
    }
    return 0;

}

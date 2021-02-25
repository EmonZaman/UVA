#include<stdio.h>
int main()
{
    int a[10000],i,j,k1,k2,count1,count2,t;
    printf("Lumberjacks:\n");
    scanf("%d", &t);
    while(t>0)
    {
        k1=101;
        k2=-1;
        count1=0;
        count2=0;
        for(i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0;j<10;j++)
        {
            if(a[j]<k1)
            {
                count1=count1+1;
                k1=a[j];
            }
            if(a[j]>k2)
            {
                count2=count2+1;
                k2=a[j];
            }
        }

        if(count1==10 || count2==10)
        {
            printf("Ordered\n");
        }
        else
        {
            printf("Unordered\n");
        }
        t--;
    }
    return 0;
}

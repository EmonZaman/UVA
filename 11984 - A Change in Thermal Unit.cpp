#include<stdio.h>
int main()
{
    int T,i;
    float c,d,f,l=0.0;
    scanf("%d",&T);
    for(i=1; i<=T; i++){
            scanf("%f%f",&c,&d);
        f=((9.0/5.0)*c)+32.0;

        f=f+d;
        l=(((5.0*f)-160.0)/9.0);
        printf("Case %d: %0.2f\n",i,l);
    }
    return 0;
}

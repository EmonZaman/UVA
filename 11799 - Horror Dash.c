#include<stdio.h>
int main()
{
    int a[10001];
    int T,N,i,j,big=0;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
            scanf("%d",&N);
        for(j=0;j<N;j++){
            scanf("%d",&a[j]);
            if(a[j]>big){
                big=a[j];

            }

        }
        printf("Case %d: %d\n",i,big);
        big=0;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    long long int n,k=2,sum=2,i=2,j=1;

    while (scanf("%lld",&n)==1){
            k=2;
    sum=2;
    if(n<0){
        goto a;
    }
    if(n==0){
        printf("%lld\n",j);
    }
    if (n==1){
        printf("%lld\n",k);
    }
    else if(n>1){

       for(i=2;i<=n;i++){
            k=sum+k;
          sum++;
        }
        printf("%lld\n",k);

    }
    }
    a:
    return 0;

}

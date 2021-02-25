#include<stdio.h>
int main()
{
int n,k,p,t,l,j;
scanf("%d",&t);

for(j=1;j<=t;j++)
 {
 scanf("%d%d%d",&n,&k,&p);
 l=k+p;
 while(l>n){

  l=k-n;
  }
 printf("Case %d: %d\n",j,l);
 }

return 0;
}


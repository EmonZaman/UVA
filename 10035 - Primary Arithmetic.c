#include<stdio.h>


int main()
{
   unsigned int a,b,c,d;
   int ans=0,carry=0,sum;
   while( scanf("%u %u", &a, &b)==2){
        if(a==0 && b==0){
            return 0;
        }

    while(a> 0 || b>0){

            c=a%10;
             a=a/10;
            d=b%10;
            b=b/10;
            sum=carry+c+d;
            carry=sum/10;
            ans=ans+carry;


            }
            if(ans==0){
             printf("No carry operation.\n");
            }
            else{
                    if(ans==1){
                            printf("%d carry operation.\n",ans);

                    }
                    else{
                printf("%d carry operations.\n",ans);
                    }
            }
            carry=0;
            ans=0;
   }




    return 0;
}



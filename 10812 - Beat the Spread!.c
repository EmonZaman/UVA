#include<stdio.h>
int main()
{
    int i,n,s,d,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&s,&d);
        if(s>=d){
                j=(s+d)/2;
                k=(s-d)/2;
                if((s+d)%2==0 && (s-d)%2==0){
                    printf("%d %d",j,k);
                }
                else{
                    printf("impossible");
                }

        }
        else{
                printf("impossible");
        }
        printf("\n");

    }
    return 0;


}
}



    return 0;
}

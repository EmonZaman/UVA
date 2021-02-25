#include<stdio.h>
#include<string.h>
int main()
{
    int n,c,d,i,len,m;
    char str[10000],str1[100];
       m=0;
       while(scanf("%s",str)){
             c=0;
            if(strcmp(str,"E-N-D")==0) break;
        len=strlen(str);
   for(i=0;i<len;i++){
    if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')||  (str[i]=='-'))
    {
    c++;
        }

    }
    if(c>m){
        strcpy(str1,str);
        m=c;
    }

    }
   len=strlen(str1);
   for(i=0;i<len;i++){
        if((str1[i]>='A' && str1[i]<='Z') || (str1[i]>='a' && str1[i]<='z') || (str1[i]=='-')){
    printf("%c",tolower(str1[i]));
   }
   }
   printf("\n");
       return 0;
}

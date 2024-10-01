#include <stdio.h>

int main() {
    int m,n,i,d;
    printf("请输入两个数：");
    scanf("%d%d",&m,&n);
     if(m>0 && n<2^31){
    for (i=1;i<=m || i<=n;i++)
    {    
       if (m%i==0 && n%i==0)
       {
        d=i;
       } 
    }  
    printf("%d",d);
    }
    else{
        printf("error,please re-enter m and n");
    }
   return 0;
}
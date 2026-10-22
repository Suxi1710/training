#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if (n!=0){
        if(n>0){
            if(n%2==0){
                printf("正数 偶数");
            }else{
                printf("正数 奇数");
            }
        }else{
             if(n%2==0){
                printf("负数 偶数");
            }else{
                printf("负数 奇数");
            } 
    }
    }else{
        printf("零 偶数");
    }
    return 0;
}

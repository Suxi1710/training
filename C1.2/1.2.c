#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    if (n > 0) {
    printf("正数");
    } else if (n < 0) {
    printf("负数");
    } else {
    printf("零");
    }

    if (n % 2 == 0) {
    printf("偶数\n");
    } else {
    printf("奇数\n");
    }
    
    return 0;
}
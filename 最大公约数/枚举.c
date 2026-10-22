#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int i,min;
    if (a<b){
        min=a;
    }else {
        min=b;
    }
    int ret=0;
    for ( i = 1; i <=min; i++)
    {
        if(a%i==0){
            if(b%i==0){
                ret=i;
            }
        } 
    }
    printf("%d",ret);
    return 0;
}
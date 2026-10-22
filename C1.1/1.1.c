#include<stdio.h>
int main()
{
    int a,b;
    int c,d,e,g;
    double f;
    scanf("%d %d",&a,&b);
    if (b!=0){
        c=a+b;
        d=a-b;
        e=a*b;
        f=(double)a/b;
        g=a%b;
        printf("%d\n%d\n%d\n%.2f\n%d\n",c,d,e,f,g);
    }else{
        printf("Error");
    }

    return 0;
}
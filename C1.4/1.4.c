#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a,b,c,m,big,small;
    int x=0;
    while(n!=495){
        a=n/100;
        b=n/10%10;
        c=n%10;

        if(a>b){
            m=a;a=b;b=m;
        }if(a>c){
            m=a;a=c;c=m;
        }if(b>c){
            m=b;b=c;c=m;
        }

        small=a*100+b*10+c;
        big=c*100+b*10+a;

        n=big-small;
        printf("%d\n",n);
        x++;      
    }
printf("¹²%d´Î\n",x);
return 0;
}
#include<stdio.h>

int main ()
{
int a,b;
    printf("two:");
     scanf("%d %d",&a,&b);

int max=0;
if(a>b)
{
    max=a;
}
else
{
    max=b;
}

printf("max is %d\n",max);
return 0;
}
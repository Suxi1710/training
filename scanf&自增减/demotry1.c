#include <stdio.h>
int main() 
{
   int a;
   short b;
   printf("please write two numbers:");
   scanf("%d %hd",&a,&b);

   printf("int:%d\nshort:%hd\n",a,b);

   getchar();
    return 0;
}

#include <stdio.h>

int main() 
{
    int a;
    a=11;

    printf("a++=%d\n",a++);
    printf("a=%d\n",a);

    printf("++a=%d\n",++a);
    printf("a=%d\n",a);

    return 0;
}
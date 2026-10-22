#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    printf("输入a的值:");
    double a;

    scanf("%lf",&a);

    printf("%f\n",a/3);//双引号内是输出，逗号后面是结果
    
    return 0;
}
#include <stdio.h>
#include <windows.h>
int main()
{
SetConsoleOutputCP(CP_UTF8);

int h1,min1;
int h2,min2;

scanf("%d %d",&h1,&min1);
scanf("%d %d",&h2,&min2);

int ih=h2-h1;
int im=min2-min1;
if (im<0)
    {im=60+im;
    ih--;
}
printf("时间差是%d小时%d分。\n",ih,im);
}



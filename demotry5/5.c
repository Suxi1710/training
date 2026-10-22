#include <stdio.h>
int main()
{
    int type;

    scanf("%d",&type);

    if(type==1)
        printf("hi");
    else if (type==2)
        printf("good morning");
    else if (type==3)
        printf("good evening");
    else if (type==4)
        printf("good bye");
    else 
        printf("what");
    
    return 0;
    
}
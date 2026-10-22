#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    int sum;
    int num;
    char symbol;
    
    while(t>0){
        int term;
    
    scanf("%d",&num);//读第一个数字
    term=num;    
    scanf("%c",&symbol);//第一个符号(为什么%c前有空格能换行，没有好像也行

    //int sum;
    sum=0;//sum=0不能放在循环内部，不然积累的值会清零，eg.3+4*2=8

        while(symbol!='='){
            scanf("%d",&num);//进入循环读下一个数字eg.3+4*2=中的4

            if(symbol=='*'){
                term=term*num;
            }else if(symbol=='/'){
                term=term/num;
            }else if(symbol=='+'){
                sum=sum+term;//使加法数字被保留
                term=num;//留存后那个数字就可以不管了，更新成下一个eg.4
            }else if(symbol=='-'){
                sum=sum+term;//这里要用+，不然会变成负值eg.10-2*3=0-10+6
                term=-num;
         
            }scanf("%c",&symbol);//继续读符号
        }    
        sum=sum+term;//最后一次运算的结果加进去
        printf("%d\n",sum);
        t--;
    }
    return 0;
}
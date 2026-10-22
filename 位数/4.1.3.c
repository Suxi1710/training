#include <stdio.h>

int main()
{
int x;
int n=0;
scanf("%d",&x);
do
{
  x/=10;
  n++;/* code */
} while (x>0);

// n++;
// x/=10;
//while (x>0)
//{
  // n++;
  // x/=10; /* code */
//}

printf("%d\n",n);
return 0;
}
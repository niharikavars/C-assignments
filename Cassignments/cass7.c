#include <stdio.h>
int main()
{
int num1=1;
int num2=1;
int i;
printf("%d\n%d\n",num1,num2);
for(i=num1+num2;i<=100;i++)
  {
    printf("%d\n",i);
    num1=num2;
    num2=i;
   }
return 0;
}

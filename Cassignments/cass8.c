#include <stdio.h>
int main()
{
int num;
int i;
int sum_odd=0,sum_even=0;
printf("enter the value of number");
scanf("%d",&num);
 for(i=0;i<=num;i++){
     if(i%2==0)
        {
         sum_even=sum_even+i;
         }
     else
       {
        sum_odd=sum_odd+i;
       }
     }
printf("sum of odd num %d\n",sum_odd);
printf("sum of even num %d\n",sum_even);
return 0;
}

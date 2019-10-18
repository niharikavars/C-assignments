#include <stdio.h>

void swap(int *a,int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
}
int main()
{
int num1=3,num2=9;
swap(&num1,&num2);
printf("after swapping : num1 is %d,num2 is %d\n",num1,num2);
return 0;
}

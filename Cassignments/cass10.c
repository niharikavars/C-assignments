#include <stdio.h>
int main()
{
int num,count=0;
int i;
printf("enter the number\n");
scanf("%d",&num);
  for(i=1;i<=num;i++)
    {
      if(num%i==0)
          count=count+1;
     }
if(count==2)
    {
      printf("%d is a prime no\n",num);
    }
else
   {
     printf("%d is not a prime no\n",num);
   }
return 0;
}

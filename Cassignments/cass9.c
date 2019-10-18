#include <stdio.h>
int main()
{
int num,rev=0,d,store;
printf("enter the value of num");
scanf("%d",&num);
store=num;
  while(num!=0)
    {
     d=num%10;
     rev=rev*10+d;
     num=num/10;
    }
printf("the reversed num is %d",rev);
  if(store==rev)
      {
       printf("String is palindrome");
      }
  else  
     {
       printf("not palindrome");
     }
return 0;
}


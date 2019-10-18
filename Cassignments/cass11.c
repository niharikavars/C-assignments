#include <stdio.h>
int main()
{
int i;
int range1,range2;
printf("enter the ranges\n");
scanf("%d %d",&range1,&range2);
   for(i=range1;i<=range2;i++)
        {
        if(i%5==0)  
            printf("%d is divisible by 5\n",i);
        }
return 0;
}


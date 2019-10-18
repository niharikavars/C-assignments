
#include <stdio.h>
#include <math.h>
int main()
{
float a1,a2,a3;
float area;
float s;
printf("enter the value of sides\n");
scanf("%f %f %f",&a1,&a2,&a3);
s=(a1+a2+a3)/2;
area=sqrt(s*(s-a1)*(s-a2)*(s-a3));
printf("\nthe area of trialnlge is %f",area);
return 0;
}

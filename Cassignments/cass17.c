#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50
int mystrsmp(char*,char*);
int main()
{
char *s1,*s2;
s1=(char*)malloc(SIZE*sizeof(char));
printf("enter first string\n");
fgets(s1,SIZE,stdin);
*(s1+strlen(s1)-1)='\0';
s2=(char*)malloc(SIZE*sizeof(char));
printf("enter second string\n");
fgets(s2,SIZE,stdin);
*(s2+strlen(s2)-1)='\0';
if(mystrcmp(s1,s2)==0)
   printf("strings are equal");
else if(mystrcmp(s1,s2)>=1)
    printf("s1 is bigger");
else {
   printf("s2 is bigger");
}
return 0;
}
int mystrcmp(char* s1,char* s2)
{
   while(*s1)
     {
       if(*s1==*s2)
        {
          s1++;
          s2++;
        }
       else
          break;
     }
   if(*s1==*s2)
       return 0;
   else if(*s1>*s2)
       return 1;
   else 
       return -1;

}

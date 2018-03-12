#include<stdio.h>
#include<string.h>
void main()
{
   char s[10];
   int a,b,c;
   printf("enter the character:");
   scanf("%s",s);
   a=strlen(s);
   b=a/2;
   if(b%2==0)
   {
       s[b-1]='*';
       s[b]='*';
       printf("%s",s);
   }
   else
   {
       s[b]='*';
       printf("%s",s);
   }
}

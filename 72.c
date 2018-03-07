#include<stdio.h>
#include<string.h>
void main()
{
char s[10];
int i,n,flag=0;
printf("enter the character:");
scanf("%s",s);
n=strlen(s);
for(i=0;i<n;i++)
{
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    {
        printf("yes");
        
    }
   else
    {
        printf("no");
    }
}
}

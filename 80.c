#include<stdio.h>
#include<string.h>
void main()
{
    char s[10];
    int a,i;
    printf("enter the no:");
    scanf("%s",s);
    a=strlen(s);
    for(i=0;i<a;i++)
    {
        if((s[i]%2)!=0)
        {
            printf("%c",s[i]);
        }
    }
    
}

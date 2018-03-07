#include<stdio.h>
#include<string.h>
void main()
{
    char s[10];
    int i,n,count=0;
    printf("entr the character:");
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]==s[n-i-1])
        {
            count++;
            
        }
    }
    if(n==count)
    {
        printf("the given character is palingdrome");
    }
    else
    {
        printf("the given character is not palingdrome");
    }
}

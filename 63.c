#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char a[70];
    int i,count,b;
    printf("enter the string");
    gets(a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        if(isspace(a[i]))
        {
            count++;
          
        }
          
    }
    printf("%d",count+1);
}



#include<stdio.h>
void main()
{
char str[10];
int i;
    printf("enter the character and integer");
    scanf("%s",str);
    if((str[i] >= 'A' && str[i] <= 'Z')||(str[i] >= 'a' && str[i] <= 'z'))
    {
        printf("yes");
    }
        else if(str[i] >='0' && str[i] <='9')
        {
            printf("yes");
        }
        else 
        {
            printf("no");
        }
    }


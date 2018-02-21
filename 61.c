#include<stdio.h>
void main()
{
    char a[10];
    int k,i;
    printf("enter the string");
    scanf("%s",&a);
    printf("enter the value");
    scanf("%d",&k);
    for(i=0;a[k]!='0';i++)
    {
        printf("the string is %s",a[i]);
    }
}

#include<stdio.h>
void main()
{
    int a,b,n;
    printf("enter the two no");
    scanf("%d%d",&a,&b);
    n=a+b;
    if(n%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}

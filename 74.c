#include<stdio.h>
void main()
{
    int a;
    float n;
    printf("enter the no:");
    scanf("%f",&n);
    if(n<0)
    {
        a=(int)(n-0.5);
        
    }
    else
    {
        a=(int)(n+0.5);
    }
   printf("the no is %d",a);
}

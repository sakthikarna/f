#include<stdio.h>
void main()
{
    int temp,a,b;
    printf("enter the a value");
    scanf("%d",&a);
    printf("enter the b value");
    scanf("%d",&b);
    printf("before swapping %d %d \n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after swapping %d %d \n",a,b);
}

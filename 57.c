#include<stdio.h>
void main()
{
    int temp,a,b;
    printf("enter the a value");
    scanf("%d",&a);
    printf("enter the b value");
    scanf("%d",&b);
    printf("before swapping %d %d \n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping %d %d \n",a,b);
}

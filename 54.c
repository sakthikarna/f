#include<stdio.h>
void main()
{
int m;
printf("enter the no");
scanf("%d",&m);
if(m%2!=0)
{
printf("the nearest even no %d\n",m-1);
}
else
{
printf("the nearest even no %d\n",m-2);
}
}

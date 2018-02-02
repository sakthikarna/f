#include<stdio.h>
void main()
{
    int n,m,a;
    printf("enter the a value");
    scanf("%d",&n);
    printf("enter the m value");
    scanf("%d",&m);
    a=n*m;
    printf("the no is %d\n",a);
    if(a%2==0)
    {
        printf("the no is even");
        
    }
    else
    {
        printf("the no is odd");
    }
    
    
}

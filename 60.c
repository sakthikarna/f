#include <stdio.h>

void main()
{
    int f1=0,f2=1,temp,i,n;
    printf("enter the no ");
    scanf("%d",&n);
    printf("the fibonacci series");
    for(i=1;i<=n;i++)
    {
        temp=f1+f2;
        f1=f2;
        f2=temp;
        printf("%d",f1);
        
    }

}

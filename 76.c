#include<stdio.h>
void main()
{
    int n,i,flag=0;
    printf("enter the no:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
        
    }
    if(flag==0)
    {
        printf("no");
        
    }
    else
    {
        printf("yes");
    }
}

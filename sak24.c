#include <stdio.h>
 
int findHcf(int a,int b)
{
    int temp;
     
    if(a==0 || b==0)
    return 0;
    while(b!=0)
    {
        temp = a%b;
        a    = b;
        b    = temp;
    }
    return a;
}
int main()
{
    int a,b;
    int hcf;
     
    printf("Enter first no: ");
    scanf("%d",&a);
    printf("Enter second no: ");
    scanf("%d",&b);
     
    hcf=find Hcf(a,b);
    printf("HCF of %d,%d is: %d\n",a,b,hcf);
     
}

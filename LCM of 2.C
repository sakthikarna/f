#include <stdio.h>
int main()
{
    int n1, n2, min Multiple;
    printf("Enter two positive int ");
    scanf("%d %d", &n1, &n2);

    min Multiple = (n1>n2) ? n1 : n2;

    while(1)
    {
        if( min Multiple%n1==0 && min Multiple%n2==0 )
        {
            printf("The LCM of %d and %d is %d.", n1, n2,min Multiple);
            break;
        }
        ++min Multiple;
    }
 
}

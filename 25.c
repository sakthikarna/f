#include <stdio.h>
int main()
{
    int n, reversed No = 0, remaind;

    printf("Enter an int ");
    scanf("%d", &n);

    while(n != 0)
    {
        remaind = n%10;
        reversed No = reversed No*10 + remaind;
        n /= 10;
    }

    printf("Reversed No = %d", reversed No);

  
}

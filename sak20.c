#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long fact = 1;

    printf("Enter an int ");
    scanf("%d",&n);

    if (n < 0)
        printf("Error! Fact of a negative no doesn't exist");

    else
    {
        for(i=1; i<=n; ++i)
        {
            fact*= i; 
        }
        printf("Fact of %d = %llu", n, fact);
    }

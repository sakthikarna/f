#include <stdio.h>

int checkPrimeNumber(int n);
int main()
{
    int n1, n2, i, flag;

    printf("Enter two positive int");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers are", n1, n2);

    for(i=n1+1; i<n2; ++i)
    {
        flag = checkPrimeNumber(i);

        if(flag == 1)
            printf("%d ",i);
    }
}

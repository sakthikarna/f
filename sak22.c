#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, next term;

    printf("Enter the no of terms ");
    scanf("%d", &n);

    printf("Fib Series ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

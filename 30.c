
#include <stdio.h>
 
void main()
{
    int i, no, odd_sum = 0, even_sum = 0;
 
    printf("Enter the value of no\n");
    scanf("%d", &no);
    for (i = 1; i <= no; i++)
    {
        if (i % 2 == 0)
            even_sum = even_sum + i;
        else
            odd_sum = odd_sum + i;
    }
    printf("Sum of all odd no  = %d\n", odd_sum);
    printf("Sum of all even no = %d\n", even_sum);
}

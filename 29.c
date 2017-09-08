#include <stdio.h>
 
void main()
{
    long no, temp, digit, sum = 0;
 
    printf("Enter the no \n");
    scanf("%ld", &no);
    temp = no;
    while (no > 0)
    {
        digit = no % 10;
        sum  = sum + digit;
        no /= 10;
    }
    printf("Given no = %ld\n", temp);
    printf("Sum of the digits %ld = %ld\n", temp, sum);
}

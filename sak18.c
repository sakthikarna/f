#include <stdio.h>
int main()
{
    int no, original no, remainder, result = 0;

    printf("Enter a three digit int: ");
    scanf("%d", &no);

    original no = no;

    while (original no != 0)
    {
        remainder = original no%10;
        result += remainder*remainder*remainder;
        original no /= 10;
    }

    if(result == no)
        printf("%d is an Armstrong no",no);
    else
        printf("%d is not an Armstrong no",no);

    
}

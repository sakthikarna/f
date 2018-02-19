
#include <stdio.h>

int main()
{
    
   char ch;
    
    
    printf("Enter any character: ");
    scanf("%c", &c);
    

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Character is an alphabet");
    }
    else
    {
        printf("Character is not an alphabet");
    }

    return 0;
}

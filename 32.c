#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int count = 0, i;
 
    printf("enter the str\n");
    scanf("%s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;    
    }
    printf("no of words in given str are: %d\n", count + 1);
}

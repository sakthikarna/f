#include <stdio.h>
int main()
{
    char c;
    int is Lowercase Vowel, is Uppercase Vowel;

    printf("Enter an alphabet: ");
    scanf("%c",&c);

    
    is Lowercase Vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    
    is Uppercase Vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    
    if (is Lowercase Vowel || is Uppercase Vowel)
        printf("%c is a vowel", c);
    else
        printf("%c is a consonant", c);
    return 0;
}

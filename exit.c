#include <stdio.h>
main ()
{
    char option;
    do
        {
            printf("Enter q to exit ");
            option = getchar ();
        }
    while (option != 'q');
}

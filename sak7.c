#include <stdio.h>

int year;
  printf ("Enter a year");
  scanf ("%d", &year);

  if (year%4 == 0) 
  {

      if(year%100 == 0) 
      {
      
          if(year%400 == 0)
             printf("\n It is leap year");
          else
             printf("\n It is not leap year");
      }

      else {
             printf ("\n It is leap year");
      }
  }
  else
      printf("\n It is not leap year");
  
return 0;

 
#include<stdio.h>
int main()
{
  int no, i, Sum = 0;
  
  printf("Please Enter any Integer Value");
  scanf("%d", &Number);
  
  for(i = 1; i <= Number; i++)
  {
     Sum = Sum + i;
  }
  
  printf("Sum of Natural no= %d", Sum);
  return 0;
}

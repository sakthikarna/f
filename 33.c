#include <stdio.h>

int main()
{

   char ch;
   unsigned int long linecount, wordcount, charcount;
   int u;
   line count=0;
   word count=0;
   char count=0;


   while((ch=getc(stdin))!=EOF)
   {


       if (ch !='\n') {++char count;}
       if (ch==' ' || ch=='\n') {++word count;}
       if (ch=='\n') {++line count;}

     }
   if(char count>0)
   {
      ++word count;
      ++line count;
   }

   printf( "%lu %lu %lu\n", char count, word count, line count );

}

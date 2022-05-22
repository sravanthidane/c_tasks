// c program to copy one textfile to another textfile//
#include <stdio.h>
int main()
{
   char ch;
   FILE *a;
   FILE *b;
   char file_a[20] = "a.txt";
   char file_b[20] = "b.txt";
   // open the file for reading//
   a = fopen(file_a, "r");
   if (a == NULL)
   {
      printf("error in opening the file for reading");
   }
   // open the file for writing//
   b = fopen(file_b, "w");
   if (file_b == NULL)
   {
      printf("error in opening the file for writing");
   }

   ch = fgetc(a);
   while (ch != EOF)
   {
      fputc(ch, b);
      // copying file character by character
      ch = fgetc(b);
   }

   printf("\nfile succesfully copied");
   printf("\n");
   fclose(a);
   fclose(b);
   return 0;
}
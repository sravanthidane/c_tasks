
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
   FILE *fptr;
   fptr = fopen(argv[1], "r");
   if (argc != 2)
   {
      printf("error");
   }
   char ch[200];
   while (fgets(ch, 200, fptr) != EOF)
   {

      {
         printf("%s", ch);
      }
   }
   fclose(fptr);
   return 0;
}

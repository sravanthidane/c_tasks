// program to implement cat command//
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    // opning file that file should exist
    fp = fopen(argv[1], "r");

    if (argc != 2)
    {
        printf("error");
    }
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    // closing file
    fclose(fp);
}
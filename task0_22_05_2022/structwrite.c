
// c program to write struct in to afile//
#include <stdio.h>
#include <stdlib.h>
#define len(array) (sizeof(array) / sizeof(array[0]))
// a struct to read and write//
struct Cat
{
    char name[20];
    int age;
    char breed[20];
};

int main()
{
    FILE *fp;
    // open file for reading
    fp = fopen("b.data", "w");
    if (fp == NULL)
    {
        printf("\nError to open the file\n");
        exit(1);
    }

    struct Cat mercy[] = {
        {"jacky", 6, "Pixie Bob"},
        {"priya", 4, "bengal cat"}};
    int mercy_len = len(mercy);
    // write struct to file
    fwrite(&mercy, sizeof(mercy), mercy_len, fp);

    if (fwrite != 0)
        printf("contents to file written successfully !\n");
    else
        printf("error writing file !\n");
    // close file
    fclose(fp);

    return 0;
}

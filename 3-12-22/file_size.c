// C program to find the size of file
#include <stdio.h>

int findSize(char filename[])
{

    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("error\n");
        return -1;
    }

    fseek(fp, 0, SEEK_END);

    int output = ftell(fp);

    fclose(fp);

    return output;
}

int main()
{
    int output = findSize("one.txt");
    if (output != -1)
        printf("Size of the file is %d: \n", output);
    return 0;
}

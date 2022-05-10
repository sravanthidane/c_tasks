// check if a string starts with substring//
#include <stdio.h>
#include <string.h>
void substring_starts(char str[], char substr[])
{
    int c, i;
    // traversing the string//
    for (i = 0; substr[i] != '\0'; i++)
    {
        if (str[i] == substr[i])

            c++;
    }

    if (c = i)
    {
        printf("String starts with  substring.\n");
    }
    else
    {
        printf("String does not start with  substring.\n");
    }
}
int main()
{
    char str[100] = "what are you doing";
    char substr[50] = "what";
    int c, i;

    substring_starts(str, substr);
    return 0;
}

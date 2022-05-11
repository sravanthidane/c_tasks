#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool char_ends(char str[], char substr[])
{
    int l1 = strlen(str);
    int l2 = strlen(substr);
    if (l2 > l1)
        return false;
    for (int i = 0; i < l2; i++)
        if (str[l1 - i] != substr[l2 - i])
            return false;
}
int main()
{

    char str[] = "iam doing well";
    char substr[] = "ll";

    if (char_ends(str, substr))
        printf("string doesnot ends with substring");
    else
        printf("string ends with substring");
    return 0;
}
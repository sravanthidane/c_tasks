//c program to check if a string ends with a substring//
#include <stdio.h>
#include <string.h>

int main()
{
    char str[30] = "capital of india";
    char substr[30] = "desfx";
    int c, i;
    int lenOfStr = strlen(str);
    int lenOfSubstr = strlen(substr);
//logic to check and traversing string//
    if (lenOfSubstr <= lenOfStr)
    {
        for (int i = 0; i < lenOfSubstr; i++)
        {
            if (str[i + lenOfStr - lenOfSubstr] != substr[i])
            {

                c == 0;
            }
        }
    }

    if (c == 1)
    {
        printf("String ends with substring.\n");
    }

    else
    {
        printf("String does not  end with substring.\n");
    }
    return 0;
}

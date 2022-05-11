// c program to check if a string ends with a substring//
#include <stdio.h>
#include <string.h>
void check_substring(char str[], char substr[])
{
    int c, lenofsubstr, lenofstr;
    if (lenofsubstr < lenofstr)
    {
        for (int i = 0; i < lenofsubstr; i++)
        {
            if (str[i + lenofstr - lenofsubstr] != substr[i])
            {

                c == 0;
            }
        }
    }   
}

int main()
{
    char str[30] = "capital of india";
    char substr[30] = "india";
    int c, i;
    int lenofstr = strlen(str);
    int lenofsubstr = strlen(substr);

    // logic to check and traversing string//
    if(check_substring(str, substr))
    { 
        printf("String does not  end with substring.\n");
    }
    else
    {
        printf("String does not  end with substring.\n");
    }  
    return 0;
}

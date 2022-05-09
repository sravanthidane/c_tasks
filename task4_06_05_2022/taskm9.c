//count all the occurances of asubstring in a string//
#include <stdio.h>
#include <string.h>

int substring_count(char string[], char substring[])
{
    int i, j, length1, length2;
    int count = 0;
    int found = 0;

    length1 = strlen(string);
    length2 = strlen(substring);

    for (i = 0; i < (length1 - length2 + 1); i++)
        found = 1;
        for (j = 0; j < length2; j++)
        {
            if (string[i + j] != substring[j])
            {
                found = 0;
                break;
            }
        }

        if (found)
        {
            count++;
            i = i + length2 - 1;
        }
    }

    return count;
}

int main()
{
    char string[] = "we too want to talk";
    char substring[] = "to";
    int count = 0;

    count = substring_count(string, substring);

    printf("Substring occurrence count is: %d\n", count);

    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    char str[30] = "sravanthi";
    char str1[20] = "sranthi";
    int count = 0;
    int i = 0;

    while (str[i] != '\0' && str1[i] != '\0')
    {

        if (str[i] != str1[i])
        {
            count++;
        }
        i++;
    }

    printf("%d", count);

    if (count == 0)
        printf("strings are equal\n");
    else
    {
        printf("strings are not equal\n");
    }
}

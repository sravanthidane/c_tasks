#include <stdio.h>
#include <string.h>
int main()
{
    char str[20] = "sravanthi is going";
    char str1[10] = "not";
    int i,l,j;
    //int l = strlen(str);
     l = strlen(str1);
    for (i = 0, j = 0; str[i] != '\0' && str1[j] != '\0'; i++)
    {

        if (str[i] == str1[j])
        {
            j++;
        }
        
        else
        {
            j = 0;
        }
    }

    if (j == l)
    {
        printf("string present\n");
    }
    else
    {
        printf("not");
    }
    return 0;
}
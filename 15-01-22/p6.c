#include <stdio.h>

int main()
{
    char one[100], two[100];

    printf("\nenter the first string: ");
    scanf("%[^\n]s", one);

    printf("\nenter the second string : ");
    scanf("%[^\n]s", two);
    char *a = one;
    char *b = two;

    while (*a)
    {
        a++;
    }
    while (*b)
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';
    printf("\nstring after concatenation is: %s ", one);

    return 0;
}
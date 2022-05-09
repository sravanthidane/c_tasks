//c program to check if a string is palindrome or not//
#include <string.h>
#include <stdio.h>
void check_palindrome(char str[])
{
    int i, n, c = 0;

    n = strlen(str);
//palindrome logic//
    for (i = 0; i < n / 2; i++)
    {
        if (str[i] == str[n - i - 1])
            c++;
    }
    if (c == i)
        printf("string is palindrome");
    else
        printf("string is not palindrome");
}
int main()
{
    char str[1000] = "sravanthi";
    check_palindrome(str);
    printf("\n");
    return 0;
}

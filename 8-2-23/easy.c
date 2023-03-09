#include <stdio.h>
#include <string.h>
int main()
{
    char string[20];
    int i;
   printf("enter string:\n");
    scanf("%s", string);
   
   
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'A' || 'a' || 'E' || 'e' || 'I' || 'i' || 'O' || 'o' || 'U' || 'u')
            
        {
            printf("easy to read\n");
        }
        else
        {
            printf("difficult to read\n");
        }
        return 0;
    }
}
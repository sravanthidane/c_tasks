#include <stdio.h>
#include<string.h>
int main()
{
    char ch[20]="you come";
    
   
    char str[20];
    char buf[50];
    printf("enter 2 strings\n");
    scanf("%[^\n]s",str);
     int count = strlen(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        buf[i] = str[i];
    }

    for (int i = 0; ch[i] != '\0'; i++)
    {
        buf[count] = ch[i];
        count++;
    }
    buf[count]='\0';
   printf("%s",buf);
}
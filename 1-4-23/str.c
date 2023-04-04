#include<stdio.h>
#include<string.h>
int main(){
    char c,str[20],string[50];
    printf("enter\n");
    scanf("%c%s",&c,str);
    scanf(" %[^\n]s",string);
     //gets(string);
     //printf("enter strings\n");
     //scanf("%[^\n]%*c", string);
    printf("%c\n%s\n%s",c,str,string);

}
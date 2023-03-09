#include<stdio.h>
#include <string.h>
// check if a string is a palindrome
void palindrome(char string[],int size)
{
    int i,c=0;
    for(i=0;i<size/2;i++)  
    {
    	if(string[i]==string[size-i-1])
    	c++;
 
 	}
 	if(c==i)
 	    printf("\nstring is palindrome ");
    else
        printf("\nstring is not palindrome ");
}
int main()
{
    char string[]="wow";
    int size;
    size=strlen(string);
    // function calling
    palindrome(string,size);

}
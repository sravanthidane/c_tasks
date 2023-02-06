// c program to reverse all bits of a integer
#include <stdio.h>
int main()
{
    int number, reverse_value=0, lsb=0, temp=0;
    //
    printf("enter desired value:");
    scanf("%d", &number);
    int i = 0;
    while (i < 4)
    {
        lsb = number & 1;
        reverse_value = lsb << (3 - i);
        temp = temp | reverse_value;
        // number updated at each iteration
        number = number >> 1;
         i++;
    }
   
    // printing output
    printf("bits after reversing:%d", temp);
    return 0;
}
// C program to check least Significant Bit (LSB) of a number using bitwise operator

#include <stdio.h>

int main()
{
    int num;
    // Input number from user
    printf("Enter any number: ");
    scanf("%d", &num);
    // If (num & 1) evaluates to 1
    if (num & 1 == 1)
        printf("LSB of %d is set", num);
    else
        printf("LSB of %d is unset", num);

    return 0;
}
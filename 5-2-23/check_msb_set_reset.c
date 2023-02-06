-
// C program to check Most Significant Bit (MSB) of a number using bitwise operator

#include <stdio.h>

int main()
{
    int num, msb, bits;
    // Total bits required to represent integer
    bits = sizeof(int) * 8;
    // nput number from user
    printf("Enter any number: ");
    scanf("%d", &num);

    // Move first bit of 1 to highest order
    msb = 1 << (bits - 1);

    // Perform bitwise AND with msb and num
    if (num & msb==1)
        printf("MSB of %d is set", num);
    else
        printf("MSB of %d is unset", num);

    return 0;
}

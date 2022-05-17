// function to calculate the sum of digits in a integer//
#include <stdio.h>
void sum_of_digits(long num, long sum)
{

    // loop to find sum of digits
    while (num != 0)
    {
        sum += num % 10;
        num = num / 10;
    }

    // output
    printf("Sum: %ld", sum);
}
int main()
{
    long num = 5812, temp, digit, sum = 0;

    sum_of_digits(num, sum);
    printf("\n");
    return 0;
}
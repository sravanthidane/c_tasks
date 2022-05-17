#include <stdio.h>
// function to count the number of occurances of a given number//
void occurences(int number, int rem, int count, int a)
{
    while (number)
    {
        rem = number % 10;
        if (rem == a)
        {
            count++;
        }
        number = number / 10;
    }
    // printing the number of occurences
    printf("%d\n", count);
}
int main()
{
    long int number = 99904599;
    int a = 9, rem;
    int count = 0;
    // function calling
    occurences(number, rem, count, a);
}
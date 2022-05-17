// function to get the absolute value of a number//
#include <stdio.h>
void absolute(int number)
{

    if (number < 0)
    {
        number = (-1) * number;
        printf("%d\n", number);
    }
    else
        // Print the absolute value
        printf("%d ", number);
}
int main()
{
    int number = -12;
    // Function call
    absolute(number);
    return 0;
}
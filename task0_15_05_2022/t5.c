// function to calculate factorial of a number//
#include <stdio.h>
int factorial_of_number(int number, int fact)
{
    int i;
    if (number < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for (i = 1; i <= number; i++)
            fact = fact * i;
    }

    printf("Factorial of %d is: %d", number, fact);
}

int main()
{
    int i, f = 1, num = 6;

    for (i = 1; i <= num; i++)
        f = f * i;

    printf("Factorial of %d is: %d", num, f);
    printf("\n");
    return 0;
}
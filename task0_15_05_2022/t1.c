// function to calculte income tax//
#include <stdio.h>
float calculate_income_tax(float income)
{
    float tax;
    if (0 <= income <= 500000)
    {
        tax = 0.0;
    }
    if (500000 <= income <= 1000000)
    {
        tax = income * 10 / 100;
    }

    if (1000000 <= income <= 2000000)
    {
        tax = income * 18 / 100;
    }
    if (2000000 <= income <= 3000000)
    {
        tax = income * 27 / 100;
    }
    if (income >= 3000000)
    {

        tax = income * 35 / 100;
    }

    printf("%lf", tax);
}
int main()
{

    float income = 1200000;
    printf("the tax to be paid for given income:");
    calculate_income_tax(income);
    printf("\n");
}

// function to check a number is odd or even//
#include <stdio.h>
#include <stdbool.h>
bool even_or_odd(int num)
{
    if (num % 2 == 0)

        return true;
    else
        return false;
}
int main()
{
    int num = 7;

    int check = even_or_odd(num);

    printf("%d", check);

    printf("\n");
    return 0;
}
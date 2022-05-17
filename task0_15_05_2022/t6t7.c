// function to calculate permutations and combinations//
#include <stdio.h>
long permutation(int n, int r);
long combination(int n, int r);
long factorial(int num);

int main(void)
{
    int n = 4, r = 2;

    printf("Permutation = %ld\n", permutation(n, r));
    printf("Combination = %ld", combination(n, r));

    return 0;
}

long permutation(int n, int r)
{
    return factorial(n) / factorial(n - r);
}

long combination(int n, int r)
{
    return permutation(n, r) / factorial(r);
}

long factorial(int num)
{
    long fact = 1;

    while (num > 0)
    {
        fact *= num;
        num--;
    }

    return fact;
}
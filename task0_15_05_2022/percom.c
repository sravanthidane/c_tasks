
#include <stdio.h>
int main()
{

    int n = 6, r = 4;
    if (n >= r)
    {
        int x = combinations(n, r);
        printf("combinations=%d", x);
        int y = permutations(n, r);
        printf("\npermutations=%d", y);
    }
    else
    {
        printf("entered input is wrong");
    }
    printf("\n");
    return 0;
    
}
long fact(int p)
{
    long facts = 1;
    int i;
    for (i = 1; i <= p; i++)
        facts = facts * i;
    return (facts);
}
int combinations(int n, int r)
{
    return (fact(n) / (fact(r) * fact(n - r)));
}
int permutations(int n, int r)
{
    return (fact(n) / fact(n - r));
}
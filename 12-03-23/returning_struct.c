#include <stdio.h>
struct data
{
    int a, b;
};
struct data show(struct data d)
{
    ++d.a;
    --d.b;
    return (d);
}
int main()
{
    struct data d1 = {34, 55};
    struct data s;
    s = show(d1);
    printf("\ns.a=%d", s.a);
    printf("\ns.b=%d", s.b);
    return 0;
}
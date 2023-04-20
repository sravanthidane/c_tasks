#include <stdio.h>
void Function1(void (*ptr) ());
void Function2();
int main()
{
    Function1(Function2);
    return 0;
}

void Function1(void (*ptr) ())
{
    printf ("Function1 is called");
    (*ptr) ();
}

void Function2()
{
    printf ("\nFunction2 is called");
}
#include <stdio.h>
#include <stdbool.h>
// function to check whether nth bit is set or reset
bool is_nth_bit_set_from_left(int number, int n_th_bit)
{
    bool is_set = false;

    // do >> number by position times then & with 1 to chek whether a bit is set or reset
    if ((number >> n_th_bit) & 1==1)
    {
        is_set = true;
    }
    return is_set;
}
void main()
{
    int number, position;
    printf("enter desired number and position to check : ");
    scanf("%d %d", &number, &position);
    // if output 1 or 0 means bit is set or reset respectively.
    printf("the bit at given nth position is:%d", is_nth_bit_set_from_left(number, position));
    
}
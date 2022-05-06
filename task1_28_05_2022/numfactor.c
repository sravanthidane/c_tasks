#include <stdio.h>
//factors of a number without pointers//
int factors(int num){
    int i;
for (i = 1; i <= num; ++i)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int num = 5, i;
    printf("Factors of %d are: ", num);
    factors(numbers);
    return 0;
}

#include <stdio.h>
void cube(int num)
{
    printf("cube fun()\n");
    int result;
    result = (num) * (num);
    printf("%d", result);
};
int main()
{
    void (*ptr)(int);
    int result, x = 5;
    ptr = &cube;
    (*ptr)(5);
     printf("result=%d",result);
    printf("%d",x);
}
#include <stdio.h>
struct data
{
    char name[20];
    int runs;
};
int main()
{
    int sum = 0;
    struct data array[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter details of cricketer:%d\n", i + 1);
        scanf("%s%d", array[i].name, &array[i].runs);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n%s%d\n", array[i].name, array[i].runs);
        sum = sum + array[i].runs;
    }
    printf("\n sum of runs:%d\n", sum);
}
#include <stdio.h>
#include <stdlib.h>
struct data
{
    int age;
    char name[30];//donot use {*name} instead use {name[10]} in dynamic memory allocation of character array
    float marks[3];
}*ptr=NULL;
int main()
{
    //struct data *ptr;
    int n;
    printf("enter number of persons data to be stored:\n");

    scanf("%d", &n);

    ptr = (struct data *)malloc(n * sizeof(struct data));
    for (int i = 0; i < n; i++)
    {
        printf("enter age and name\n");
        scanf("%s%d", (ptr + i)->name, &(ptr + i)->age);
    }
    printf("printing details\n");
    for (int i = 0; i < n; i++)
    {
        printf("name:  %s\tage=  %d\n", (ptr + i)->name, (ptr + i)->age);
    }
}
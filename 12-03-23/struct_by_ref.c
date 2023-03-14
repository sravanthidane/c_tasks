#include <stdio.h>
struct student
{
    char name[20];
    int age;
    int rollnum;
    float marks;
};

struct student sum(struct student *s1)
{
    s1->age++;
    s1->marks--;
    s1->rollnum=s1->rollnum+5;
    printf("%d %d %f", s1->age, s1->rollnum, s1->marks);
}
int main()
{
    struct student s = {"sravanthi", 20, 34, 98.6};
    sum(&s);

    return 0;
}
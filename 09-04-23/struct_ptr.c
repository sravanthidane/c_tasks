#include <stdio.h>
struct student
{
    char name[10];
    int age;
    float marks[3];
};
struct school
{
    // char org_name[20];
    int pin;
    char org_name[20]; // limited size
    char roll;
    struct student s1[3];
};
int main()
{

    // struct school org={"sree shaitanya",505531,{"sai",10,{10,20,30},"hari",12,{13,24,34},"beeri",15,{18,34,45}}};

    struct school *ptr, org;

    ptr = &org;
    printf("%ld\n", sizeof(org));

    scanf("%d%s", &ptr->pin, ptr->org_name);
    printf("enter name,roll \n");
    // scanf(" %c%s",&ptr->roll,ptr->org_name);//we should take integer firt then lastly string because string stores null character at end by which next input gets skipped off

    // printf("enter details:org name\n");
    // scanf("%c%d%s",&ptr->roll,&ptr->pin,ptr->org_name);correct

    printf("enter data of 2 students\n");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d%s", &ptr->s1[i].age, ptr->s1[i].name);
    }
    printf("enter marks\n");
    for (int i = 0; i < 2; i++)
    {
        printf("enter marks of student[%d] in biology,maths,telugu for 50 marks", i);
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &ptr->s1[i].marks[j]);
        }
    }
    printf("comparing marks\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((org.s1[i].marks[j]) < 20)
            {
                printf("name=%s age=%d\n", org.s1[i].name, org.s1[i].age);
            }
        }
    }
}
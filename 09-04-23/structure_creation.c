#include <stdio.h>
struct data
{
    int age;
    // char name[10];
    char roll_no;
    float marks;
    char roll;

} student;

int main()
{
    printf("enter following data\n");
    printf("age=%ld", sizeof(student.age));
    printf("marks=%ld", sizeof(student.marks));
    printf("roll=%ld", sizeof(student.roll_no));
    // printf("age=%ld",sizeof(student.name));
    // struct data student ={32,"sravanthi",39.34,'s'};
    // scanf("%c%d%s%f",&student.roll_no,&student.age,student.name,&student.marks);
    printf("size:%ld\n", sizeof(student));
    // printf("name=%s\nage=%d\nmarks=%f\nroll=%c",student.name,student.age,student.marks,student.roll_no);
}
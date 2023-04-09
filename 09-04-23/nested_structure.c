#include <stdio.h>
struct student
{
    int age;
    char name[30];
    float marks;
    struct date
    {
        int D;
        int M;
        int Y;
    } birthd, adate;//struct date birthd;struct date{ int d,int m,int y};
} sravan,*ptr;

int main()
{
    ptr=&sravan;
    printf("enter details\n");
    scanf("%d%s%f", &sravan.age, sravan.name, &sravan.marks);
    printf("enter date of birth and admission\n");
    scanf("%d-%d-%d", &sravan.birthd.D, &sravan.birthd.M, &sravan.birthd.Y);
    scanf("%d-%d-%d", &sravan.adate.D, &sravan.adate.M, &sravan.adate.Y);
    int result = (sravan.adate.Y - sravan.birthd.Y);
    printf("r=%d", result);
}
#include <stdio.h>
struct student
{
    char name[10];
    int rollnumber;
} ;
int main()
{
    struct student s[100];
    FILE *fpt;
    int n;
    fpt = fopen("raj.csv", "w");
    fprintf(fpt, "name,rollnumber\n");
      printf("Enter total of students:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter name");
        scanf("%s", s[i].name);
        printf("enter name");
        scanf("%d", &s[i].rollnumber);
    }
    for (int i = 0; i < n; i++)
    {
        fprintf(fpt, "%s,%d", s[i].name, s[i].rollnumber);
    }
}
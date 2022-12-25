#include <stdio.h>
struct student {
    char firstname[50];
    int roll;
    float marks;
} s[5];

int main() {
    int i;
    printf("Enter information of students:\n");
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nroll number%d,\n", s[i].roll);
        printf("first name: ");
        scanf("%s", s[i].firstname);
        printf("marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n");
    // displaying
    for (i = 0; i < 5; ++i) {
        printf("\nroll number: %d\n", i + 1);
        printf("first name: ");
        puts(s[i].firstname);
        printf("marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}

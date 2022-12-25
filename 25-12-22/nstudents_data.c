#include <stdio.h>
#include <stdlib.h>
struct course {
  int marks;
  char subject[30];
};

int main() {
  struct course *ptr;
  int no_of_Records;
  printf("Enter the number of records: ");
  scanf("%d", &no_of_Records);

  // Memory allocation for noOfRecords structures
  ptr = (struct course *)malloc(no_of_Records * sizeof(struct course));
  for (int i = 0; i < no_of_Records; ++i) {
    printf("Enter subject and marks:\n");
    scanf("%s %d", (ptr + i)->subject, &(ptr + i)->marks);
  }

  printf("Displaying Information:\n");
  for (int i = 0; i < no_of_Records; ++i) {
    printf("%s\t%d\n", (ptr + i)->subject, (ptr + i)->marks);
  }

  free(ptr);

  return 0;
}
// function to check prime number using bool//
#include <stdio.h>
#include <stdbool.h>
bool check_prime(int array[], int len)
{
  int num, i, j;
  if (array == NULL || len == 0)
    return false;
  else
  {
    for (i = 0; i < len; i++)
    {
      num = array[i];

      for (j = 2; j <= num / 2; j++)
      {
        if (num % j == 0)
          break;
      }
      if (j > num / 2)
        printf("%d ", num);
    }
    printf("\n");
    return true;
  }
}
int main()
{
  int array[] = {4, 7, 3, 9, 5, 6};
  int len = sizeof(array) / sizeof(int);
  int n = 6, i, flag = 0;
  check_prime(array, len);
  printf("\n");
  return 0;
}
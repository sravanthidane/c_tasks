// function to check prime number using bool//
#include <stdio.h>
#include <stdbool.h>
bool check_prime(int array[], int len)
{
  int number, i;
  if (array == NULL || len == 0)
    return false;
  else if
  {
    for (i = 1; i <=number; i++)
    {
     if (number % i == 0)
     {
       c++;
     }   
    }
    if (c == 2)
    {
      printf(" given number is prime number");
    }
    else
    {
      printf("given number is not prime");
    }
    return true;
  }
}
int main()
{
  int array[] = {4, 7, 3, 9, 5, 6};
  int len = sizeof(array) / sizeof(int);
  int number = 6;
  check_prime(array, len);
  printf("\n");
  return 0;
}

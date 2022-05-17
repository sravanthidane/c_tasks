// function to check whether a number is negative or positive//
#include <stdio.h>
#include <stdbool.h>
bool check_positive_or_negative(int num)
{

  if (num > 0)
    return true;
  else if (num < 0)
    return false;
  printf("0 is neither positive nor negative");
}

void main()
{
  int num = 6;
  int check = check_positive_or_negative(num);

  printf("%d", check);
  printf("\n");
}
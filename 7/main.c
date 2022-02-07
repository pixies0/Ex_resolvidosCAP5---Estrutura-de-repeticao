#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int i, num1, num2, res;
  num1 = 0;
  num2 = 1;
  printf("%d %d ", num1, num2);

  for (i = 3; i <= 8; i++)
  {
    res = num1 + num2;
    printf("%d ", res);
    num1 = num2;
    num2 = res;
  }

  return 0;
}
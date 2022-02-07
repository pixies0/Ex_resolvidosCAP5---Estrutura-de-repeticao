#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int i, numTermos, num1, num2, num3;
  printf("Numero de termos:");
  scanf("%d", &numTermos);
  num1 = 2;
  num2 = 7;
  num3 = 3;
  printf("%d %d %d ", num1, num2, num3);

  i = 4;
  do
  {
    num1 = num1 * 2;
    printf("%d ", num1);
    i++;
    if (i != numTermos)
    {
      num2 = num2 * 3;
      printf("%d ", num2);
      i++;
      if (i != numTermos)
      {
        num3 = num3 * 4;
        printf("%d ", num3);
        i++;
      }
    }
  } while (i != numTermos);

  return 0;
}
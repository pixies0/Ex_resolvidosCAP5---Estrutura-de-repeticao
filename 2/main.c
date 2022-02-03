#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int n;
  float e, i, j, fat;
  printf("Digite um numero inteiro positivo:");
  scanf("%d", &n);

  e = 1;
  for (i = 1; i <= n; i++)
  {
    fat = 1;
    for (j = 1; j <= i; j++)
      fat = fat * j;

    e = e + (1 / fat);
  }

  printf("Resultado E = %f", e);

  return 0;
}
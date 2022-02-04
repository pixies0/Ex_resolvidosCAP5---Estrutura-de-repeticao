#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
  int fim, i, j, x, expoente, numTermos;
  int den, denominador, fat, s;

  printf("Numero de termos:");
  scanf("%d", &numTermos);
  printf("Valor de x:");
  scanf("%d", &x);

  s = 0;
  denominador = 1;
  for (i = 1; i <= numTermos; i++)
  {
    fim = denominador;
    fat = 1;
    for (j = 1; j <= fim; j++)
      fat = fat * j;

    expoente = i + 1;
    if ((expoente % 2) == 0)
      s = s - pow(x, expoente) / fat;
    else
      s = s + pow(x, expoente) / fat;

    if (denominador == 4)
      den = -1;
    if (denominador == 1)
      den = 1;

    if (den == 1)
      denominador = denominador + 1;
    else
      denominador = denominador - 1;
  }
  printf("s = %d", s);
}
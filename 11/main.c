#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int num, i, div = 0;
  printf("Digite um numero inteiro positivo:");
  scanf("%d", &num);

  for (i = 1; i <= num; i++)
  {
    if (num % i == 0)
      div++;
  }

  if (div > 2)
    puts("Nao e primo");
  else
    puts("E primo");

  return 0;
}
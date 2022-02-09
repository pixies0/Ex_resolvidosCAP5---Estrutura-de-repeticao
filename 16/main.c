#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int base, altura, area;

  do
    scanf("%d", &base);
  while (base <= 0);

  do
    scanf("%d", &altura);
  while (altura <= 0);

  area = (base * altura) / 2;
  printf("Area do triangulo: %d", area);

  return 0;
}
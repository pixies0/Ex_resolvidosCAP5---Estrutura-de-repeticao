#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int i, anoAtual;
  float sal, novoSal, percent;

  printf("Digite o ano atual:");
  scanf("%d", &anoAtual);
  sal = 1000;
  percent = 0.015;
  novoSal = sal + (percent * sal);

  for (i = 2007; i <= anoAtual; i++)
  {
    percent = percent * 2;
    novoSal = novoSal + (percent * novoSal);
  }
  printf("Salario atual: %.2f", novoSal);

  return 0;
}
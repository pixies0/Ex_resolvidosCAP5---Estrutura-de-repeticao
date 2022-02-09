#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  float salCarlos, salJoao;
  int meses = 0;

  printf("Salario de carlos: R$");
  scanf("%f", &salCarlos);

  salJoao = salCarlos / 3;

  while (salJoao < salCarlos)
  {
    salCarlos = salCarlos + (salCarlos * 0.02);
    salJoao = salJoao + (salJoao * 0.05);
    meses++;
    printf("Mes:%d Carlos R$%.2f Joao R$%.2f\n", meses, salCarlos, salJoao);
  }
  printf("E necessario %d meses para o salario de joao igualar ou ultrapassar o de carlos...", meses);
  return 0;
}
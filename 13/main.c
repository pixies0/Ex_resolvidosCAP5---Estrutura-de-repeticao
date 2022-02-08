#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int i, numCria, idade; // em meses;
  char sexo;
  int totalM = 0, totalF = 0, total24 = 0, percentM, percentF, percent24;

  printf("Numero de criancas nascidas:");
  scanf("%d", &numCria);

  for (i = 0; i < numCria; i++)
  {
    printf("Sexo da %dª crianca:\n", i + 1);
    scanf(" %c", &sexo);
    printf("Idade da %dª crianca (em meses):\n", i + 1);
    scanf("%d", &idade);

    if (sexo == 'M' || sexo == 'm')
      totalM++;
    if (sexo == 'F' || sexo == 'f')
      totalF++;
    if (idade <= 24)
      total24++;
  }

  system("pause");
  system("cls");

  if (numCria == 0)
    printf("Nenhuma crianca registrada\n");
  else
  {
    percentM = (totalM * 100) / numCria;
    percentF = (totalF * 100) / numCria;
    percent24 = (total24 * 100) / numCria;

    printf("%d%% criancas do sexo masculino mortas\n", percentM);
    printf("%d%% criancas do sexo feminino mortas\n", percentF);
    printf("%d%% criancas com 24 meses ou menos mortas\n", percent24);
  }
  return 0;
}